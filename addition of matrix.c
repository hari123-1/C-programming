#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter row and column value:");
    scanf("%d %d",&row,&col);
    int a[row][col],sum,sum1;
    printf("Enter matrix value:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        sum1=0;
        for(j=0;j<col;j++)
        {
            sum1=sum1+a[j][i];
        }
        printf("%d ",sum1);
    }
}
