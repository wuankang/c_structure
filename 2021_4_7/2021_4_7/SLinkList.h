#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
typedef int SLTDateType;

typedef struct SLinkList
{
	int date;
	struct SLinkList* next;
}SLinkList;
// ��̬����һ���ڵ�
SLinkList* BuySListNode(SLTDateType x);
//β��
void SLinkListPushBack(SLinkList** plist, SLTDateType x);
//��ӡ
void SlinkListprint(SLinkList* plist);
//ͷ��
void SLinkListPushFront(SLinkList** plist, SLTDateType x);
// �������βɾ
void SLinkListPopBack(SLinkList** pplist);
// ������ͷɾ
void SLinkListPopFront(SLinkList** pplist);
// ���������
SLinkList* SListFind(SLinkList* plist, SLTDateType x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SLinkList* pos, SLTDateType x);