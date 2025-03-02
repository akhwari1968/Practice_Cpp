#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
	int a;
	int b;
	struct LNode* next;
}LNode,*LinkList;

void initlist(LinkList* L)
{
	*L = (LNode*)malloc(sizeof(LNode));
	(*L)->next = NULL;
}

int insertlist(LNode *L,int x,int y)
{
	if(L == NULL) return 0;
	LNode* S = (LNode*)malloc(sizeof(LNode));
	S->a = x;
	S->b = y;
	S->next = L->next;
	L->next = S;
}

int main()
{
	int n,m,x,y;
	LinkList L1;
	initlist(&L1);
	scanf("%d" "%d",&n,&m);
	for (int i = n;i > 0;i--)
	{
		scanf("%d %d",&x,&y);
		insertlist(L1,x,y);
	}
	for (int i = m;i  > 0;i--)
	{
		
	}
	
	return 0;
}