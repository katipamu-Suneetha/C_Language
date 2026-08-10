#include<stdio.h>
int main()
{
    int marks[5] ={ 91,90,87,76,96};

    int memory_of_array,length_of_array;

    printf("\nsize of the marks arrays: %d\n\n",memory_of_array);

    length_of_array = sizeof(marks)/sizeof(marks[0]);

    printf("length of the marks array:%d\n\n",length_of_array);

    printf("the value of marks of student1 is%d\n",marks[0]);
    printf("the value of marks of student2 is %d\n",marks[1]);
    printf("the value of marks of student 3is%d\n",marks[3]);
    printf("the value of th student 4 is %d\n",marks[4]);

    printf("the value of marks of student is %d\n",marks[5]);

    return 0;
}