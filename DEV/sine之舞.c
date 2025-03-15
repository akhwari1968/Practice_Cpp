#include <stdio.h>

void fun2(int m,int n)
{
	if (m == n)
	{
		printf("sin(%d)",n);
	}
	else
	{
		printf("sin(%d",n);
		if(n%2 == 0)
		{
			printf("+");
		}
		else
		{
			printf("-");
		}
		
		printf("");
		fun2(m,n+1);
		printf(")");
	}
}

void fun1(int m,int n)
{
	if (m == n)
	{
		fun2(1,1);
		printf("+%d",m);
	}
	else
	{
		printf("(");
		fun1(m,n+1);
		printf(")");
		fun2(m-n+1,1);
		printf("+%d",n);
	}
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	fun1(n,1);
	
	return 0;
}