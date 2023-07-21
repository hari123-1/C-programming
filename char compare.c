#include<stdio.h>
int main()
{
    char s[10],a[10];
    gets(s);
    char goal[10];
    gets(goal);
    int i,n=strlen(s);
    for(i=n-1;i>0;i--)
    {
        a[i]=s[i];
    }
    puts(a);
    if(a==s)
    {
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
}
