#include<stdio.h>
int main(){
    int marks;
    do{
    printf("enter your marks (0-100):");
    scanf("%d",&marks);
    if(marks<0 || marks >100)
    { 
    printf("invalid marks. enter marks again..\n");
    }
    while(marks<0|| marks >100);
    if(marks>=90)
    {
    printf("grade A\n");
    }
    else if(marks >=80)
    {
        printf("grade b\n");
    }
    else
    {
        printf("you may be detained\n");
    }

    return 0;
    }
}