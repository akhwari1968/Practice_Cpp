#include <stdio.h>

typedef struct LNode
{
	int a;
	int b;
	struct LNode* next;
}LNode,*LinkList;

void initlist(LinkList *L)
{
	L = (LNode*)malloc(sizeof(LNode));//头节点
	L.next = NULL;
}

void insertlist(LNode &L,int x,int y)
{
	
}

int main()
{
	int n,m,x,y;
	LinkList L1;
	initlist(&L1);
	scanf("%d" "d%",&n,&m);
	for (int i = n;i > 0;i--)
	{
		scanf("d% d%",&x,&y);
		insertlist(L1,x,y);
	}
	
	return 0;
}