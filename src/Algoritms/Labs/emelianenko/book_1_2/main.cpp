#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
float a, b, c, s, p;
cout<<"Vvedite dlini storon treugalnika"<<endl;
//Ввод значений длин треугольника a, b, c .
cin>>a>>b>>c;
//Вычисление периметра треугольника .
p=a+b+c;
//Вычисление площади треугольника .
s=sqrt ( p /2*( p/2-a )*( p/2-b )*( p/2-c ) );
//Вывод на экран дисплея значений площади и периметра треугольника.
cout<<"Perimetr raven "<<p<<", Ploshadi ravna "<<s<<endl;
return 0;
}
//EmelianenkoA.M.
