#include <iostream>
using namespace std;
int main ( )
{
    float X,Y;
    cout<<" X = "; cin >>X;
    cout<<" Y = "; cin >>Y;
    if ( (Y<=1+( float ) 1/2 *X && Y<=-2*X+11 && Y>=1) | (Y<=1-( float ) 1/2 *X && Y<=2*X+11 && Y>=1))
        cout <<"Tochka prinadlezhit oblasti"<< endl;
    else
        cout<<"Tochka ne prinadlezhit oblasti"<< endl;
    return 0;
}
//Авакян Р.В.
