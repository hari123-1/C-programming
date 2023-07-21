#include<stdio.h>
int main()
{
    char a[30];
    gets(a);
    int i,b=strlen(a);
    for(i=b-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
