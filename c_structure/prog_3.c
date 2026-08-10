#include<stdio.h>

struct student{
    int roll;
    char name[30];

};
int main()
{
    struct student s[3];
    int i;
    for(i=0;i<3;i++)
    printf("enter roll number:");
    scanf("%d", &s[i].roll);
    getchar();

    printf("enter name:");
    fgets(s[i].name,sizeof(s[i].name),stdin);

}
printf("\n student details\n");
for(i=0; i<3; i++)
{
    printf("%d%s",s[i].roll,s[i].name);
}
return 0;
}

