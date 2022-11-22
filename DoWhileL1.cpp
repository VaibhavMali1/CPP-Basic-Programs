#include<iostream>
using namespace::std;
int main()
{
  int number, total=0;
  cout<<"\n Please Enter any integer below 10 \n";
  cin>>number;
  do
   {
     total = total + number;
     cout<<" Number =\n"<<number;
     cout<<" Total Value is: \n"<<total; 
     number++;
   }
   while (number< 10);
   cout<<" Total Value from outside is: \n"<<total;
  	return 0;
}