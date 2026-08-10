#include<stdio.h>
#include<string.h>
int main()
{
    char source[] = "c programming";
    char destination[50];
    strcpy(destination,source);
    printf("the source string is:%s\n",source);
    printf("the destination string is: %s\n",destination);
    return 0 ;

}

