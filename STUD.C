#include<stdio.h>
struct student
{
int age;
int marks;
int usn;
char name[10];
};
void main()
{
int n,i,j,max,pos;
struct student s[10];
printf("enter the number of students\n");
scanf("%d",&n);
printf("Enter the student info\n");
for(i=0;i<n;i++)
{
scanf("%d%d%d%s",&s[i].age,&s[i].marks,&s[i].usn,s[i].name);
}
max=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(s[j].marks>s[max].marks)
{
max=j;
}
}

printf("%d\t%d\t%d\t%s",s[max].age,s[max].marks,s[max].usn,s[max].name);
printf("/n");
j=max;
s[j].marks=0;
}
printf("\n");
}
