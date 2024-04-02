#include <iostream>
#include <math.h>
using namespace std;
int main ( )
{
    float a, b, c, d, x1, x2;
    //Ввод значений коэффициентов квадратного уравнения.
    cout<<" a = "; cin >>a;
    cout<<" b = "; cin >>b;
    cout<<" c = "; cin >>c;
    d=b*b-4*a*c; //Вычисление дискриминанта.
    if (d<0)
        //Если дискриминант отрицательный, то вывод сообщения, о том что действительных корней нет,
        cout<<"Net dejstvitel'nyh kornej";
    else
    {
        //иначе вычисление действительных корней
        x1=( -b+sqrt (d) ) /2/a;
        x2=( -b-sqrt (d) ) /(2 * a);
        //и вывод их значений.
        cout<<" X1 = "<<x1<<" \t X2 = "<<x2<<" \n ";
    }
    return 0;
}
//Emelianenko А.М.
