#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main ( )
{
    float a, b, c, S, r;
    printf ( " Vvedite a, b, c \n" ); //Вывод на экран строки символов.
    scanf ( " %f %f %f",&a,&b,&c ); //Ввод значений.
    r=(a+b+c ) / 2;
    S=sqrt ( r * ( r-a ) * ( r-b ) * ( r -c ) );
    printf ( " S =%5.2f \t p =%5.2f \n ",S, 2 * r ); //Вывод результатов.
    return 0;
}
//Emelianenko
