#include<stdio.h>
int main()
{
    int arr[5]= {21,24,98,78,27};
    int i,largest;
    largest =arr[0];
    for(i=1;i<5;i++)
    {
    if (arr[i] > largest)
    {
        largest =arr[i];
    }
}
printf("largest = %d\n", largest);
return 0;

}