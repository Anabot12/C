#include <stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    switch(age)
    {
        case 3:
            printf("the age is 3");
            break;
        default:
            break;
    }
}