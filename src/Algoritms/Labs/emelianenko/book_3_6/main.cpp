#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14159 //Определение константы
int main ( )
{
    float a, b, c, d,D, r, s, t, p, q, ro, fi, x1, x2, x3, u, v, h, g;
    //Ввод коэффициентов кубического уравнения.
    cout<<" a = "; cin >>a;
    cout<<" b = "; cin >>b;
    cout<<" c = "; cin >>c;
    cout<<" d = "; cin >>d;
    //Расчёт коэффициентов канонического уравнения по формуле 3.2
    r=b/a; s=c /a; t=d/a;
    //Вычисление коэффициентов приведённого уравнения по формуле 3.3
    p=(3*s -r * r ) / 3; q=2* r* r * r /27 - r * s/3+t;
    //Вычисление дискриминанта кубического уравнения
    D=(p /3) * ( p /3) * ( p /3) +(q /2) * ( q /2);
    if (D<0)
    {
        //Формулы 3.5
        ro=sqrt ( ( float )( -p* p* p/27) );
        fi=-q /(2 * ro );
        fi=pi/2 - atan ( fi / sqrt (1 - fi * fi ) );
        x1=2*pow( ro, ( float ) 1/3) * cos ( fi /3)- r /3;
        x2=2*pow( ro, ( float ) 1/3) * cos ( fi /3+2* pi /3)- r /3;
        x3=2*pow( ro, ( float ) 1/3) * cos ( fi /3+4* pi /3)- r /3;
        cout<<" \n x1 = "<<x1<<" \t x2 = "<<x2;
        cout<<" \t x3 = "<<x3<<" \n ";
    }
    else
    {
        //Формулы 3.4
        if ( -q/2+sqrt (D) >0) u=pow(( - q/2+sqrt (D) ),( float ) 1/3);
        else
        if ( -q/2+sqrt (D) <0) u=-pow( fabs( -q/2+sqrt (D) ),( float ) 1/3);
        else u=0;
        if (-q/2 - sqrt (D) >0) v=pow(( -q/2 - sqrt (D) ),( float ) 1/3);
        else
        if ( -q/2 - sqrt (D) <0) v=-pow( fabs( -q/2 - sqrt (D) ),( float ) 1/3);
        else v=0;
        x1=u+v-r /3; //Вычисление действительного корня кубического уравнения.
        h= -(u+v)/2 - r /3; //Вычисление действительной
        g=(u-v) /2 -sqrt (( float ) 3); //и мнимой части комплексных корней
        cout<<" \ n x1 = "<<x1;
        if (x2>=0)
        {
            cout<<x1<<" + "<<x2<<" i \t ";
            cout<<x1<<" -"<<x2<<" i \n ";
        }
        else
        {
            cout<<x1<<" -"<<fabs ( x2 )<<" i \t ";
            cout<<x1<<" + "<<fabs ( x2 )<<" i \n ";
        }
    }
    if (g>=0)
    {
        cout<<" \t x2 = "<<h<<" + "<<g<<" i ";
        cout<<" \t x3 = "<<h<<" -"<<g<<" i \n ";
    }
    else
    {
        cout<<" \t x2 = "<<h<<" -"<<fabs (g)<<" i ";
        cout<<" \t x2 = "<<h<<" + "<<fabs (g)<<" i ";
}
return 0;
}
//Emelianenko A.M.
