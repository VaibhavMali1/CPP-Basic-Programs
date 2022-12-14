#include<iostream>
using namespace::std;
int main()
{
	char ch;
	cout<<"enter any character"<<endl;
	cin>>ch;
	if (ch>='a'&&ch<='z')
	{
		cout<<"character is in lowercase";
	}
	else if(ch<='A'&&ch>='Z')
	{
		cout<<"character is in uppercase";
	}
    else
    {
    	cout<<"invalid entry";
	}
}