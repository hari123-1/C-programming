#include<stdio.h>
int main()
{
   int a[50],i,j,k, count = 0, dup[50], n;
   scanf("%d",&n);

   for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      dup[i] = -1;
   }
   for(i=0;i<number;i++)
   {
      for(j = i+1; j < n; j++)
      {
         if(a[i] == a[j])
         {
            for(k = j; k <n; k++)
            {
               a[k] = a[k+1];
            }
            j--;
            number--;
         }
      }
   }
   for(i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
}
