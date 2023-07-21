#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],temp,small;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[small])
                small=j;
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
