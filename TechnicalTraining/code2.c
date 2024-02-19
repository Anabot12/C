//stack question
#include<stdio.h>
/*void count (int n )
{
    static int d=1; //
    printf("%d",n); // 1 iteration:3 2 iteration: 2
    printf("%d",d);//1 iteration : 1 2 iteration:2
    d++; // d ka value 2 hogya 1 iteration mein 2 iteration mein 3 hogya
    if ( n>1) count (n-1); // program call hogya toh vapis upar chala jayega and start hojayega with updated values
    printf("%d",d); // 1 iteration: 2
}
void main(){
    count(3);
}*/

/*3 1 2 2*/

//
/*
int r(){
    static int num=7; // agr static nahi hota toh woh infinite hota
    return num--;
}
int main(){
    for ( r();r();r()) // for loop chalta hai pehle pehla wala R hoga execute toh woh 7 jayega then memory
    //mein value 6 hojayegi and then again r execute hoga and 5 aayega and then print hojayega and then
    //again starting se 5 se execute hona shuru hoga and then end mein 2 aajayga and print hojayega
        printf("%d",r());
    return 0;
}
*/

