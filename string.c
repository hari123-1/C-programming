#include<stdio.h>
int main()
{
    char s[100];
    int i=0,c,length=0;
    gets(s);
    for(i=0;i<s[i]!='\0';i++)
    {
        length+=1;
    }
    while(s[i]!='\0')
    {
        if(s[i]!=' ')
        {
            c++;
        }
        else{
            c=0;
        }
        i++;
    }
    for(i=length-c;i>length;i++)
    {
        printf("%s",s[i]);
    }
}
