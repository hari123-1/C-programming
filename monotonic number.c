#include<stdio.h>
int inc(int a[],int num)
{
    int i;
    for(i=0;i<num-1;i++)
    {
        if(a[i]<a[i+1])
        return 0;
    }
    return 1;
}
int dec(int a[],int num)
{
    int i;
    for(i=0;i<num-1;i++)
    {
        if(a[i]>a[i+1])
        return 0;
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(inc(a,n)||dec(a,n))
    {
        printf("MONOTONIC");
    }
    else
    {
       printf("NON MONOTONIC");
    }
}
