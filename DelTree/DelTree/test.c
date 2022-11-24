#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void show(int* arr,int h)
{
	int i = 0;
	while (i<=h)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void DelTree(int n, int h, int sum,int* arr)
{
	if (sum == n)
	{
		show(arr,h-1);
		return 0;
	}
	if (sum > n)
		return 0;
	for (int i = 1; i < 3; i++)
	{
		if (sum < n)
		{
			arr[h] = i;
			DelTree(n, h + 1, sum + i, arr);
			
		}
	}
}

int main()
{
	int num = 8;
	int h = 0;
	int sum = 0;
	int arr[100] = { 0 };
	DelTree(num, h, sum, arr);
	return 0;
}