#include <stdio.h>
#include <string.h>
struct student
{
int rollno;
char name[15];
int marks;
};
void main()
{

    int count;
    printf("****student marks****\n");
    printf("enter student count\n");
    scanf("%d",&count);
    struct student [count];
    for(int i=0;i<count;i++)
    {
        printf("Enter rollno\n");
        scanf("%d",&s[i].rollno);
        printf("Enter name\n");
        scanf("%s",&s[i].name);
        printf("Enter marks\n");
        scanf("%d",&s[i].marks);
    }
    for(int i=0;i<count;i++)
    {
     printf("Rollno:%d\n",s[i].rollno);
     printf("Name:%d\n",s[i].name);
     printf("Marks:%d\n",s[i].marks);
     printf("~~~~~~~~~~~~~~~~~~\n");
     int topper=0;
     for int (i=1;i<count;i++)
     {

         if(s[i].marks>s[topper].marks)
         {
             topper=i;
         }
     }
     printf("*******Topper*********\n");
     printf("Rollno:%d\n",s[topper].rollno);
     printf("Name:%d\n",s[topper].name);
     printf("Marks:%d\n",s[topper].marks);
    }
}
