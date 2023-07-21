#include<stdio.h>
int main()
{
    int n,i,m,flag;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("Search found");
    }
    else{
        printf("Search not found");
    }

}
