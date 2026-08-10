#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("student .txt", "r");
    if(fp == NULL)
    {
        printf("file is not found.\n");
        return 1;
    }
    while((ch =fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}
