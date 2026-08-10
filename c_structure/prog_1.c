#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct student s1 ={1, "tharun", 90};
    struct student s2 ={2,"lochan", 91};

   
     printf("\n----student-1 details----\n");
    printf("\troll number :%d\n", s1.roll);
    printf("\tname        :%s\n", s1.name);
    printf("\tmarks        :%.2f\n", s1.marks);

     printf("\n----student-2 details----\n");
    printf("\troll number :%d\n", s2.roll);
    printf("\tname        :%s\n", s2.name);
    printf("tmarks        :%.2f\n", s2.marks);

    return 0;

}