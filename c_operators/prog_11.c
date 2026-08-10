#include<stdio.h>
int main(){
    int attendance;
    printf("enter your attendence percentage:");
    scanf("%d",&attendance);
    if(attendance>=90)
    { 
    printf("excellent attendence\n");
    }
    else if(attendance >=75)
    {
    printf("good attendence\n");
    }
    else if(attendance >=65)
    {
        printf("average attendence\n");
    }
    else
    {
        printf("you may be detained\n");
    }
    return 0;
}
