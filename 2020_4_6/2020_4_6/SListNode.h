#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>
typedef int SLTDateType;
typedef struct SListNode
{
	int date;
	struct SListNode* next;
}SListNode;

// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x);

// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x);

// 单链表打印
void SListPrint(SListNode* plist);

// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x);

// 单链表的尾删
void SListPopBack(SListNode** pplist);