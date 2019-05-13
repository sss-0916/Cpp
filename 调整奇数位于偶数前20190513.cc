#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

const int len = 10;

static int random(){
	return 1 + rand() % (99 - 1 + 1);
}

static void arrInit(vector<int>& arr){
	int i = 0;

	for (; i < len; ++i){
		arr.push_back(random());
	}
}

static void arrDisplay(vector<int>& arr){
	int i = 0;
	int len = arr.size();

	for (; i < len; ++i){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	srand((unsigned int)time(0));

	vector<int> arr;

	arrInit(arr);

	arrDisplay(arr);

	int left = 0;
	int right = arr.size() - 1;
	while (left < right){
		while (left < right && (arr[right] % 2 == 0)){
			--right;
		}
		while (left < right && (arr[left] % 2 == 1)){
			++left;
		}
		swap(arr[left], arr[right]);
	}

	arrDisplay(arr);
	
	system("pause");
	return 0;
}