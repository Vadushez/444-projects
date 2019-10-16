#include <iostream>

using namespace std;

int main()
{

    unsigned long c=3;
    int i1=0;
    for (int i=1;c<4294967295;i++)
    {
        c=c*3;
        i1=i;
    }
    cout<<i1;
}
