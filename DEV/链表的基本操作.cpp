#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*Linklist;

int insert(LNode *L,int x)
{
	LNode *s = (LNode*)malloc(sizeof(LNode));
	s->data = x;
	s->next = L->next;
	L->next = s;
	return 1;
}

int main()
{
	Linklist L;
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	int n;
	
	scanf("%d",&n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&x);
		insert(L,x);
	}
	char arr[6];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",arr);
		if (arr[0] == s)
		{
			//遍历展示
		}
		else if(arr[0] == i)
		{
			//插入
		}
		else if(arr[0] == d)
		{
			//删除
		}
		else if(arr[0] == g)
		{
			//获取
		}
	}
	printf("\n");
	return 0;
}