#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter row and column value:");
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=col-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
