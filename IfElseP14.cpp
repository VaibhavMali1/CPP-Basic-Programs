#include <iostream>
using namespace::std;
int main()
{
	int cp,sp,profit, loss;
	cout <<"Enter Cost Price:"<<endl;
	cin>>cp;
	cout <<"Enter Selling Price:"<<endl;
	cin>>sp;
	if(sp>cp)
	{
		profit=sp-cp;
		cout<<"Profit"<<profit<<endl;
	}
	else if(cp>sp)
{
	loss=cp-sp;
	cout<<"Loss of"<<loss<<endl;
}
else
{
	cout<<"no profit no loss.";
}
}