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
	LinkList L1,L2,t,e;
	initlist(&L1);
	LNode *p1 = L1;
	scanf("%d" "%d",&n,&m);
	for (int i = 0;i < n;i++)
	{
		scanf("%d %d",&x,&y);
		insertlist(L1,x,y);
	}
	t = L1;
	initlist(&L2);
	for (int i = 0;i < m;i++)
	{
		scanf("%d %d",&x,&y);
		insertlist(L2,x,y);
	}
	printf("\n");
	
	while(p1->next != NULL)
	{
		p1 = p1->next;
		t = t->next;
	}
	t->next = L2->next;
	free(L2);

	p1 = L1->next;
	int tmp = 0,min = 0;
	while(p1->next != NULL)
	{
		t = p1->next;
		min = p1->a;
		e = p1;
		while(t != NULL)
		{
			if (t->a < min)
			{
				min = t->a;
				e = t;
			}
			t = t->next;
		}
		
		tmp = p1->a;
		p1->a = e->a;
		e->a = tmp;
		tmp = p1->b;
		p1->b = e->b;
		e->b = tmp;
		p1 = p1->next;
	}
	
	p1 = L1;
	while(p1->next != NULL)
	{
		printf("%d %d",p1->next->a,p1->next->b);
		printf("\n");
		p1 = p1->next;
	}

	return 0;
}