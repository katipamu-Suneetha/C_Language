#include<stdio.h>
int main()
{
   char name [20];
   int age;
   printf("hello");
   printf("enter a name:");
   scanf("%s",&name);
   printf("enter your age: ");
   scanf("%d",&age);
   printf("%s thank you. You are aweson %s.\n Your age is: %d",name,name,age);
   return 0;
}