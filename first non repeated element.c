#include<stdio.h>
int main()
{
    int i,n,j;
    char a[100],b;
    gets(a);
    n=strlen(a);
    for(i=0;i<n!='\0';i++)
    {
        for(j=0;j<n!='\0';j++)
        {
            if(a[i]==a[j+1])
            {
                break;
            }
            else
            {
                b=a[i];
            }
        }
        printf("%c",b);
        break;
    }

