#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a[20];
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
                if(a[i+j+k]==n)
                {
                    printf("%d",i,j,k);
                }
        }
    }
}
