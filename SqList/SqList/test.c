#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
#include <stdbool.h>

#define SIZEMAX 10

typedef struct
{
	int* List;
	int length;
}SeqList;

void SentenceEmpty(int* address)
{
	printf("%s\n", strerror(errno));
	assert(address);
}

void InitList(SeqList* L)
{
	SentenceEmpty(L);
	int* arr = (int*)calloc(SIZEMAX, sizeof(int));
	if (arr == NULL)
	{
		printf("%s\n",strerror(errno));
		assert(arr);
	}
	else
	{
		(*L).List = arr;
	}
}

bool ListInsert(SeqList* L,int i , int e)
{
	int j = 0;
	SentenceEmpty(L);
	if (i < 1 || i > SIZEMAX)
		return false;
	if ((*L).length == SCHAR_MAX)
		return false;
	for (j = (*L).length; j >= i -1; j--)
	{
		*(L->List + j) = *(L->List + j - 1);
	}
	*(L->List + i - 1) = e;
	L->length++;
}

int main()
{
	SeqList L;
	//初始化
	InitList(&L);
	
	//添加元素
	int i = 0; //位序，
	int e = 0;
	ListInsert(&L,i,e);

	return 0;
}