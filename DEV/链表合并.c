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
	return 1;
}

int main()
{
	int n,m,x,y;
	LinkList L1,L2,L3;
	initlist(&L1);
	scanf("%d" "%d",&n,&m);
	for (int i = 0;i < n;i++)
	{
		scanf("%d %d",&x,&y);
		insertlist(L1,x,y);
	}
	
	initlist(&L2);
	for (int i = 0;i < m;i++)
	{
		scanf("%d %d",&x,&y);
		insertlist(L2,x,y);
	}
	printf("\n");
	
	initlist(&L3);
	LNode *p1 = L1, *p2 = L2, *p3 = L3;
	while()
	{
		
	}
	
	while(p3->next != NULL)
	{
		printf("%d %d",p3->next->a,p3->next->b);
		printf("\n");
		p3 = p3->next;
	}

	return 0;
}