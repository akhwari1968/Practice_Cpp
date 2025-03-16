#include<stdio.h>
void An(int i,int n)
{
    if(i==n)
    printf("sin(%d)",n);
    else{
        printf("sin(%d",i);
        if(i%2!=0)
        printf("-");
        else
        printf("+");
        An(i+1,n);
        printf(")");
    }
}    
void Sn(int i,int n)
{
    if(n==1){
        An(1,1);
        printf("+%d",i);
    }else{
        printf("(");
        Sn(i+1,n-1);
        printf(")");
        An(1,n);
        printf("+%d",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    Sn(1,n);
    return 0;
}