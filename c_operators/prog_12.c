#include<stdio.h>
int main()
{
    int choice;
    printf("1 enter a biriyani\n");
    printf("2 enter a dum biriyani\n");
    printf("3 enter a muttun biriyani\n");
    printf("\nenter a choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("you order a bi9riyani\n");
        break;
        case 2:
        printf("you order a dum biriyani\n");
        break;
        case 3:
        printf("you order a muttun biriyani\n");
        break;
        default:
        printf("invalid choice\n");
    }
    return 0;
}
        
