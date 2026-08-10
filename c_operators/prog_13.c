#include<stdio.h>
int main()
{
int pin;
float balance = 5000;
float amount;
printf("enter pin:");
scanf("%d",&pin);
if(pin == 1234)
{
    printf("enter withdrawal amount:");
    scanf("%f",&amount);
    if(amount <= balance)
    {
        printf("transection successfull\n");
        printf("please collect your\n");
        printf("remaining balance = %.2f\n", balance - amount);
    }else{
        printf("insufficient balance\n");
    }
}
else
{
    printf("invalied pin\n");
}
return 0;
}