#include <iostream>

using namespace std;

int main()
{
   int n=0;
   cin>>n;
   int max_num=0;
   int count=0;
   for (int i=1;i<n;i++)
   {
        for (int j=1;j<=i;j++)
        {
            if (i%j==0)
            {
            count++;
            }
        }
        if (count==2)
        {
        max_num=i;
        }
        count=0;
   }
   cout<<max_num;
}
