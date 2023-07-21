#include<stdio.h>
int main()
{
    char a[30],b[30];
    int count=1;
    gets(a);
    int i,j,b=strlen(a);
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        printf("%c-%d\n",a[i],count);
    }
}
