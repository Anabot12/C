#include<stdio.h>
int factorial(int number)
{3
    if (number==1 || number==0)
    {
        return 1;
    }
    else
    {
        return(number *factorial(number-1));
    }
}
int main()
{
    int num;
    printf("entr the number for which you want to find the factorial\n");
    scanf("%d",&num);
    printf("the factorial of %d is %d\n",num,factorial(num));
    return 0;
}

