#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string>
#include <arpa/inet.h>
#include <unistd.h>

using std::cout;
using std::endl;

// 缓冲大小
#define BUF_SIZE 1024

// UDP socket类
class UdpSocket{
	public:
		// 构造函数
		UdpSocket()
			: _sockfd(-1)
		{}

		// 创建套接字
		bool Socket(){
			// 创建套接字
			_sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
			if(_sockfd < 0){
				// 套接字创建失败
				perror("socket error");
				return false;
			}

			return true;
		}

		// 绑定地址信息
		bool Bind(std::string& ip, uint16_t port){
			// IPv4地址结构
			struct sockaddr_in addr;
			addr.sin_family = AF_INET;
			// 点分十进制IP转二进制形式
			inet_pton(AF_INET, ip.c_str(), &addr.sin_addr);
			// 端口号，主机字节序转网络字节序
			addr.sin_port = htons(port);

			// 地址空间长度
			socklen_t len = sizeof(struct sockaddr_in);
			// 绑定地址信息
			int ret = bind(_sockfd, (struct sockaddr*)&addr, len);
			if(ret < 0){
				// 绑定失败
				perror("bind error");
				return false;
			}

			return true;
		}

		// 接收
		bool Recv(std::string& buf, struct sockaddr_in* saddr){
			// 清空缓冲区
			buf.clear();
			buf.resize(BUF_SIZE);

			// 地址空间大小
			socklen_t len = sizeof(struct sockaddr_in);
			// 阻塞接收
			int ret = recvfrom(_sockfd, &buf[0], BUF_SIZE, 0, 
					(struct sockaddr*)saddr, &len);
			if(ret < 0){
				// 接收失败
				perror("recvfrom error");
				return false;
			}

			return true;
		}

		// 发送
		bool Send(std::string& buf, struct sockaddr_in* daddr){
			// 地址信息长度
			socklen_t len = sizeof(struct sockaddr_in);

			// 阻塞发送
			int ret = sendto(_sockfd, buf.c_str(), buf.size(), 0,
					(struct sockaddr*)daddr, len);
			if(ret < 0){
				// 发送失败
				perror("sendto error");
				return false;
			}

			return true;
		}

		// 关闭
		bool Close(){
			// 关闭套接字
			int ret = close(_sockfd);
			if(ret < 0){
				// 套接字关闭失败
				perror("close error");
				return false;
			}

			return true;
		}

	private:
		// 套接字描述符
		int _sockfd;
};
