#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+a[i+1]+a[i+2]==0)
            {
                printf("[%d,%d,%d] ",a[i],a[i+1],a[i+2]);
            }
    }
}
