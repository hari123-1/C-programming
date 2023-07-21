#include<stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   int fees=0;
   if(n<=20)
   {
       int a[n];
   for(i=0;i<n;i++)
   {

       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]<17)
       {
           fees=fees+200;
       }
       else if(a[i]>=17&&a[i]<40)
       {
           fees=fees+400;
       }
       else if(a[i]>=40)
       {
           fees=fees+300;
       }
   }
   printf("%d",fees);
   }
   else{
    printf("INVALID INPUT");
   }
}
