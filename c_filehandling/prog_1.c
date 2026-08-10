#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student .txt", "w");
    if(fp == NULL)
    {
        printf("unable to create file.\n");
        return 1;
    }

    fprintf(fp,
    "Tody is the last of c!\n"
    "i learned  and understood c.\n"
    "now, i should practice"
    "to become expert.\n"

    );
    fclose(fp);

    printf("date written successfully .\n");

    return 0;
}