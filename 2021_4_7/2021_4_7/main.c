#include "SLinkList.h"

void test()
{
	SLinkList* plist = NULL;
	SLinkListPushBack(&plist, 2);
	SLinkListPushBack(&plist, 3);
	SLinkListPushFront(&plist, 1);
	SlinkListprint(plist);
	SLinkList* pos = SListFind(plist, 2);
	
}

int main()
{
	
	test();
	return 0;
}