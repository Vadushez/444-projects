#include <iostream>
#include <bitset>


using namespace std;

int main()
{
   long int num=0;

   cin>>num;
  while (num>10)
  {
  num=num/10;
  }
  int max_num=num%10;
   cout<<bitset<4>(max_num)<<endl;
     cout<<max_num;


}
