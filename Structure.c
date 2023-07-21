#include<stdio.h>
 struct employee
    {
        char name[50];
        int id;
        int salary;
        char DOB[30];
        char Address[30];
        char gender[10];
    };
int main()
{
    struct employee s[4];
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%s %d %d %s %s %s",&s.name,&s.id,&s.salary,&s.DOB,&s.Address,&s.gender);
    }
    for(i=0;i<4;i++)
    {
        printf("Name:%s id:%d salary:%d DOB:%s Address:%s gender:%s\n",s.name,s.id,s.salary,s.DOB,s.Address,s.gender);
    }
    return 0;
}
