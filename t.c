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
        case 4:
            printf("the age is 13");
            break;
        case 5:
            printf("the age is 15");
            break;

        default:
        printf("age is not 3,13 or 15");
            break;
    }

    return 0;
}