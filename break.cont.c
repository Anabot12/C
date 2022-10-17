#include <stdio.h>
int main()
{
    printf("hello world\n");
    int i,age;
    for (i=0;i<10;i++)
    {
        printf("%d enter your age",i);
        scanf("%d",&age);
        if (age>10)
        {
            continue;
        }
        printf("enter your name");
    }
    return 0;
} 