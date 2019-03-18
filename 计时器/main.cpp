#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "timer.h"

const int num1 = 20000;
const int num2 = 80000;

int travelSearch(int* arr, int len, int target)
{
	assert(arr != NULL);
	if (len <= 0)
	{
		return -1;
	}
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		if (target == arr[i])
		{
			return i;
		}
	}
	return -1;
}

void swap(int* a, int* b)
{
	assert(a != NULL);
	assert(b != NULL);
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, int len)
{
	assert(arr != NULL);
	int bound = 0;
	for (bound = 0; bound < len; ++bound)
	{
		int cur = 0;
		for (cur = len - 1; cur > bound; --cur)
		{
			if (arr[cur] < arr[cur - 1])
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

int binarySearch(int* arr, int len, int target)
{
	assert(arr != NULL);
	if (len <= 0)
	{
		return -1;
	}
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (target > arr[mid])
		{
			left = mid + 1;
		}
		else if (target < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int* arrInit(const int num)
{
	srand((unsigned int)time(0));
	int* arr = (int*)malloc(sizeof(int) * num);
	assert(arr != NULL);
	int i = 0;
	for (i = 0; i < num; ++i)
	{
		arr[i] = 11 + rand() % (99 - 11 + 1);
	}
	return arr;
}

void time(const int num)
{
	Timer timer;

	int* arr = arrInit(num);

	timer.timerStart();
	travelSearch(arr, num, 100);
	timer.timerEnd();
	printf("遍历查找 耗时: %lf 毫秒\n", timer.intervalMs());

	timer.timerStart();
	bubbleSort(arr, num);
	timer.timerEnd();
	printf("冒泡排序 耗时: %lf 毫秒\n", timer.intervalMs());

	timer.timerStart();
	binarySearch(arr, num, 100);
	timer.timerEnd();
	printf("二分查找 耗时: %lf 毫秒\n", timer.intervalMs());
}

int main()
{
	//printf("%d个数: \n", num1);
	//time(num1);
	printf("%d个数: \n", num2);
	time(num2);
	system("pause");
	return 0;
}