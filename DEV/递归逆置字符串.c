#include <stdio.h>

void reverse(int i,int j,char *p)
{
	if (j <= i)
	return;
	else
	{
		int tmp = 0;
		tmp = p[i];
		p[i] = p[j];
		p[j] = tmp;
		printf("%s\n",p);
		reverse(i+1,j-1,p);
	}
}

int main()
{
	int i = 0,j = 0;
	char arr[100];
	
	scanf("%d %s",&i,arr);

	reverse(0,i-1,arr);
	printf("\n");
	printf("%s",arr);
	return 0;
}