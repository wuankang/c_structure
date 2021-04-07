#include"SLinkList.h"
//��ӡ
void SlinkListprint(SLinkList* plist)
{
	SLinkList* cur = plist;
	while (cur!= NULL)
	{
		printf("%d->", cur->date);
		cur = cur->next;
	}
	printf("NULL\n");
}
// ��̬����һ���ڵ�
SLinkList* BuySListNode(SLTDateType x)
{
	SLinkList* node = (SLinkList*)malloc(sizeof(SLinkList));
	node->date = x;
	node->next = NULL;
	return node;
}
//β��
void SLinkListPushBack(SLinkList** pplist,SLTDateType x)
{
	SLinkList* newnode = BuySListNode(x);
	if ( *pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SLinkList* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	
}
//ͷ��
void SLinkListPushFront(SLinkList** pplist, SLTDateType x)
{
	SLinkList* newnode = BuySListNode(x);
	newnode->next=*pplist;
	*pplist = newnode;
}
//βɾ
void SLinkListPopBack(SLinkList** pplist)
{
	if (*pplist == NULL)
	{
		return;
	}
	else if ((*pplist)->next==NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SLinkList* prev = NULL;
		SLinkList* tail = *pplist;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}
//ͷɾ
void SLinkListPopFront(SLinkList** pplist)
{
	SLinkList* first = *pplist;
	if (*pplist == NULL)
	{
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SLinkList* next = first->next;
		free(first);
		*pplist = next;
	}
}
// ���������
SLinkList* SListFind(SLinkList* plist, SLTDateType x)
{
	if (plist == NULL)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		SLinkList* cur = plist;
		while (cur)
		{
			if (cur->date == x)
			{
				return cur;
			}
			cur = cur->next;
	
		}
	}
	return NULL;
}
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SLinkList* pos, SLTDateType x)
{

}