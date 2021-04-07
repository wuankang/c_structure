#include"SLinkList.h"
//打印
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
// 动态申请一个节点
SLinkList* BuySListNode(SLTDateType x)
{
	SLinkList* node = (SLinkList*)malloc(sizeof(SLinkList));
	node->date = x;
	node->next = NULL;
	return node;
}
//尾插
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
//头插
void SLinkListPushFront(SLinkList** pplist, SLTDateType x)
{
	SLinkList* newnode = BuySListNode(x);
	newnode->next=*pplist;
	*pplist = newnode;
}
//尾删
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
//头删
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
// 单链表查找
SLinkList* SListFind(SLinkList* plist, SLTDateType x)
{
	if (plist == NULL)
	{
		printf("找不到\n");
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
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SLinkList* pos, SLTDateType x)
{

}