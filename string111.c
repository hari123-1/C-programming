#include<stdio.h>
int main()
{
 char a[10];
 scanf("%s",&a);
 int i,b;
 printf("Enter the range:");
 scanf("%d",&b);
 for(int j=b-1;j>=0;j--)
 {
     printf("%c",a[j]);
 }
 for(i=b;i<10;i++)
{
    printf("%c",a[i]);
}
return 0;
}
