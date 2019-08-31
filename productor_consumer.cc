#include <iostream>
#include <queue>
#include <pthread.h>
#include <unistd.h>

using std::cout;
using std::endl;

// 线程数量
const int n = 4;

// 共享变量
int resources = 1;

// 阻塞队列
class BlockQueue{
	public:
		// 构造函数
		BlockQueue(int cap = 10)
			: _capacity(cap)
		{
			// 初始化互斥量
			pthread_mutex_init(&_mutex, NULL);
			// 初始化条件变量
			pthread_cond_init(&_cond_pro, NULL);
			pthread_cond_init(&_cond_con, NULL);
		}

		// 析构函数
		~BlockQueue(){
			// 销毁互斥量
			pthread_mutex_destroy(&_mutex);
			// 销毁条件变量
			pthread_cond_destroy(&_cond_pro);
			pthread_cond_destroy(&_cond_con);
		}

	public:
		// 入队
		bool BlockQueuePush(int data){
			// 上锁
			BlockQueueLock();
			// 队列满
			while(BlockQueueFull()){
				// 等待
				ProductorWait();
			}
			// 队列不为满，入队
			_queue.push(data);
			// 唤醒消费者
			ConsumerWakeUp();
			// 解锁
			BlockQueueUnlock();

			return true;
		}

		// 出队
		bool BlockQueuePop(int* data){
			// 上锁
			BlockQueueLock();
			// 队列为空
			while(BlockQueueEmpty()){
				// 消费者等待
				ConsumerWait();
			}
			// 队列不为空，拿取队中数据
			*data = _queue.front();
			_queue.pop();
			// 唤醒生产者
			ProductorWakeUp();
			// 解锁
			BlockQueueUnlock();

			return true;
		}

	private:
		// 阻塞队列上锁
		void BlockQueueLock(){
			pthread_mutex_lock(&_mutex);
		}

		// 阻塞队列解锁
		void BlockQueueUnlock(){
			pthread_mutex_unlock(&_mutex);
		}

		// 阻塞队列是否为空
		bool BlockQueueEmpty(){
			return _queue.empty();
		}

		// 阻塞队列是否满
		bool BlockQueueFull(){
			return _queue.size() == _capacity;
		}

		// 生产者等待
		void ProductorWait(){
			pthread_cond_wait(&_cond_pro, &_mutex);
		}

		// 消费者等待
		void ConsumerWait(){
			pthread_cond_wait(&_cond_con, &_mutex);
		}

		// 唤醒生产者
		void ProductorWakeUp(){
			pthread_cond_signal(&_cond_pro);
		}

		// 唤醒消费者
		void ConsumerWakeUp(){
			pthread_cond_signal(&_cond_con);
		}

	private:
		// 队列
		std::queue<int> _queue;
		// 容量
		size_t _capacity;
		// 互斥锁
		pthread_mutex_t _mutex;
		// 条件变量：生产者
		pthread_cond_t _cond_pro;
		// 条件变量：消费者
		pthread_cond_t _cond_con;
};

// 生产者
void* thr_productor(void* arg){
	BlockQueue* bq = (BlockQueue*)arg;

	while(1){
		cout << "productor put resources: " << resources << endl;
		// 生产者生产数据放入阻塞队列
		bq->BlockQueuePush(resources++);
		sleep(1);
	}

	pthread_exit(0);
}

void* thr_consumer(void* arg){
	BlockQueue* bq = (BlockQueue*)arg;

	while(1){
		int data;
		// 消费者消费阻塞队列中的数据
		bq->BlockQueuePop(&data);
		cout << "consumer get data: " << data << endl;
		sleep(1);
	}
}

int main(){
	pthread_t ptid[n], ctid[n];
	BlockQueue bq;
	int i, ret;

	// 线程创建
	for(i = 0; i < n; ++i){
		ret = pthread_create(&ptid[i], NULL, thr_productor, (void*)&bq);
		if(ret != 0){
			// 线程创建失败
			cout << "productor thread " << i << " create failed!\n";
		}

		ret = pthread_create(&ctid[i], NULL, thr_consumer, (void*)&bq);
		if(ret != 0){
			// 线程创建失败
			cout << "consumer thread " << i << " create failed!\n";
		}
	}

	// 线程等待
	for(i = 0; i < n; ++i){
		pthread_join(ptid[i], NULL);
		pthread_join(ctid[i], NULL);
	}

	pthread_exit(0);
}
