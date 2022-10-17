#include <stdio.h>
/*int sum(int a ,int b);
int main()
{
    int a,b,c;
    a=9;
    b=10;
    c=sum(a,b);
    printf("the sum is %d \n",c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
*/

//No Argument and No Return Value 
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	}
    
} 
 
