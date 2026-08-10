#include<stdio.h>

struct student{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct  student  s;

    printf("enter roll number:");
    scanf("%d",&s.roll);
    getchar();
    printf("enter name:");
    fgets(s.name, sizeof(s.name),stdin);

    printf("enter marks:");
    scanf("%f", &s.marks);

     printf("\n----student-1 details----\n");
    printf("\troll number :%d\n", s.roll);
    printf("\tname        :%s\n", s.name);
    printf("\tmarks        :%.2f\n",s.marks);

    return 0;

} 