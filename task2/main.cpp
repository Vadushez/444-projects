#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=n;
    for (int i=1;i<=n;i++)
    {
    if (i%2!=0)
    {
    int j=(s-1)/2;
        while(j>0)
        {
        cout<<" ";
        j--;
        }
        for (int m=0;m<i;m++)
        {
            cout<<"*";
        }
        j=(s-1)/2;
        while(j>0)
        {
        cout<<" ";
        j--;
        }
        cout<<endl;

        }
        s--;

    }
}
