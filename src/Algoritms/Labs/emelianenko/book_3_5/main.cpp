#include <iostream>
#include <math.h>
using namespace std;
int main ( )
{
    float a, b, c, d, x1, x2;
    cout<<" a = "; cin>>a;
    cout<<" b = "; cin>>b;
    cout<<" c = "; cin>>c;
    d=b*b-4*a*c;
    if (d<0)
    { //Если дискриминант отрицательный, то вывод соответствующего сообщения.
        cout<<"Net veshchestvennyh kornej \n ";
        x1=-b/(2 * a ); //Вычисление действительной части комплексных корней.
        x2=sqrt ( fabs (d) ) /(2 * a ); //Вычисление модуля мнимой части комплексных корней
        //Сообщение о комплексных корнях уравнения вида ax2 + bx + c = 0.
        cout<<"Kompleksnye korni uravneniya \n ";
        cout<<a<<" x ^2+ "<<b<<" x + "<<c<<" =0 \n ";
        //Вывод значений комплексных корней в виде x1 + ix2, x1 - ix2
        if ( x2>=0)
        {
            cout<<x1<<" + "<<x2<<" i \t ";
            cout<<x1<<" - "<<x2<<" i \n ";
        }
        else
        {
            cout<<x1<<" - "<<fabs( x2 )<<" i \t ";
            cout<<x1<<" + "<<fabs( x2 )<<" i \n ";
        }
    }
    else
    {
        //Если дискриминант положительный, вычисление действительных корней и вывод их на экран.
        x1=( -b+sqrt (d) ) /2/a;
        x2=( -b- sqrt (d) ) /(2 * a );
        cout<<"Veshchestvennye korni uravneniya \n ";
        cout<<a<<" x ^2+ "<<b<<" x + "<<c<<" =0 \n ";
        cout<<"x1 = "<<x1<<" \t x2 = "<<x2<<" \n";
    }
    return 0;
}
//Emelianenko А.М.
