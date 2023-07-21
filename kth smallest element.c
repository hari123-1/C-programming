#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
               {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
               }
        }
    }
    int k;
    scanf("%d",&k);
    printf("%d",a[k-1]);
}
