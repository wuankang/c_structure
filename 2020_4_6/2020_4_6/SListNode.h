#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>
typedef int SLTDateType;
typedef struct SListNode
{
	int date;
	struct SListNode* next;
}SListNode;

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x);

// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x);

// �������ӡ
void SListPrint(SListNode* plist);

// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x);

// �������βɾ
void SListPopBack(SListNode** pplist);