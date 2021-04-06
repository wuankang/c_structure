#include "SListNode.h"

void test()
{
	SListNode* plist=NULL;
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushFront(&plist, 1);

	SListPrint(plist);
}


int main()
{
	test();
	return 0;
}