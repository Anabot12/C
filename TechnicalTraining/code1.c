#include <stdio.h>
/*int main()
{
    int a []={2,4,6,8,10};
    int i,sum=0,*b=a+4;
    for (i=0;i<5;i++)
        sum=sum+(*b-i)-*(b-i);
    printf("%d\n",sum);
    return 0;

}
*/
//
/*
void func1(int n)
{
    if(n==0) return;
    printf("%d",n);
    func2(n-2);
    printf("%d",n);

}
void func2(int n)
{
    if(n==0) return;
    printf("%d",n);
    func1(++n);
    printf("%d",n);
}

func1(5);
*/

int main()
{
    int f (int n )
    {
        static int r=0;
        if(n<=0) return 1 ;
        if (n>3)
        {
            r=n;
            return f(n-2) + 2;
        }
        return f(n-1)+r;
    }
    f(5);
}
