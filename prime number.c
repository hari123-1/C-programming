#include<stdio.h>
int main()
{
    int a,b,c=b-a;
    scanf("%d%d",&a,&b);
    int i,j;
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b-1;j++)
        {
           if(i%j==0)
                printf("%d",i);
        }
    }
    return 0;
}
