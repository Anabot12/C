#include <stdio.h>
int main()
{
    int num;
   for(int i=0;i<8;i++)
   {
       printf("%d",i);
       for(int j=0;i<8;j++)
       {
           printf("enter th number ,enter 0 to exit\n");
           scanf("%d",&num);
           if (num==0)
           {
               goto end;

           }
       }
   }
   end:

    return 0;
}