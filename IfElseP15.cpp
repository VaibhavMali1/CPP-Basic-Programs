#include<iostream>
using namespace::std;
int main()
{
	 int s1,s2,s3;
	 cout<<"Please Enter Three Sides of the Triangle"<<endl;
	 cin>>s1>>s2>>s3;
	 if(s1==s2 && s2==s3)
	 {
	 	cout<<"Equilateral Triangle"<<endl;
	 }
	 else if(s1==s2||s1==s3 || s2==s3)
	 {
	 	cout<<"Isosceles Triangle"<<endl;
	 }
	 else
	 {
	 	cout<<"Scalene Triangle";
	 }
}