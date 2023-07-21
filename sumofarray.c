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
    int sum,b,flag;
    printf("Enter sum value:");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            b=a[i]+a[j];
            if(b==sum)
            {
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
}
