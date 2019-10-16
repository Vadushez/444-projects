#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"Vvedite poocheredno koefficenti kvadratnogo uravneniya"<<endl;
    cin>>a>>b>>c;
    double D=b*b-4*a*c;
    if (D<0)
    {
    cout<<"Resheniy net";
    }
    if (D==0)
    {
        cout<<"1 reshenie"<<" ";
        cout<<"{"<<-b/(2*a)<<"}";
    }
    if (D>0)
    {
    cout<<"2 Resheniya"<<" ";
    int x1=(-b+sqrt(D))/(2*a);
    int x2=(-b-sqrt(D))/(2*a);
    cout<<"{"<<x1<<","<<x2<<"}";
    }


}
