#include<iostream>
#include<cstring>
using namespace::std;
int main(){
	
	cout<<"What is your name: "<<endl;
	string str1;
	getline(cin, str1 ,'\n');
	cout<< "your name is : " << str1 << endl;
	return 0;
}