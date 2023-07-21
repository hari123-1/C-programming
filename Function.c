#include<stdio.h>
int sum(int n1,int n2)
{
    n1=n1*2;
    n2=n2*2;
    printf("%d \n%d\n",n1,n2);
    return 0;
}



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    printf("%d \n%d",a,b);
    return 0;
}
