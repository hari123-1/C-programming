#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a=0,b=0;
    for(i=0;i<n;i++)
    {
        a=a+1;
        b=b+a;
    }
    printf("%d",b);
}
