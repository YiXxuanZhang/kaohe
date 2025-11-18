// ConsoleApplication72.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#pragma warning(disable:4996)
#include <iostream>
using namespace std;

int main()
{
	int str[8];
	printf("Please type 8 numbers");
	int i,m,n;
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &str[i]);
	}
	int temp = 0;
	int min[8];
	for (m = 0; m < 8; m++)
	{
		for (n = m + 1; n < 8; n++)
		{
			if (str[n] < str[m])
			{
				temp = str[n];
				str[n] = str[m];
				str[m] = temp;
			}
		}
	}
	for (i = 0; i < 8; i++)
	{
		printf("%d ", str[i]);
	}
}