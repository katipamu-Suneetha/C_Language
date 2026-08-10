#include<stdio.h>
int main()
{
    float cgpa;
    char name[20];
    char grade;
    printf("entr your cgpa and char name and char grade:");
    scanf("%f %s %c",&cgpa,&name,&grade);
    printf("your cgpa: %f\n",cgpa);
    printf("enter your name: %s\n",name);
    printf("enter grade:%c\n",grade);
    return 0;
}