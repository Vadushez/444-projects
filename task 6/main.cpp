#include <iostream>

using namespace std;

int main()
{
    long int n=0;
    cin>>n;
    int m=5;
    int count=0;
    int k=0;
    for (int i=1;m<=n && count==0;i++)
    {
    if(m!=n)
        {
        m=m*5;
        }
        else
        {
        count++;;
        k=i;
        }
    }
    if (count>0)
    {
    cout<<k;
    }
    else
    {
    cout<<"Resheniy net";
    }
}
