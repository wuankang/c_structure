#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
typedef int SLTDateType;

typedef struct SLinkList
{
	int date;
	struct SLinkList* next;
}SLinkList;
// 动态申请一个节点
SLinkList* BuySListNode(SLTDateType x);
//尾插
void SLinkListPushBack(SLinkList** plist, SLTDateType x);
//打印
void SlinkListprint(SLinkList* plist);
//头插
void SLinkListPushFront(SLinkList** plist, SLTDateType x);
// 单链表的尾删
void SLinkListPopBack(SLinkList** pplist);
// 单链表头删
void SLinkListPopFront(SLinkList** pplist);
// 单链表查找
SLinkList* SListFind(SLinkList* plist, SLTDateType x);
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SLinkList* pos, SLTDateType x);