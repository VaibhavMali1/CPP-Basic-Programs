#include<iostream>
using namespace::std;
int sum(int a,int b,int c,int d,int e)
{
        return(a+b+c+d+e);
}
inline int mul(int a,int b,int c,int d,int e)
{
        return(a*b*c*d*e);
}
int main()
{
        int a,b,c,d,e;
        cout<<"\nEnter 1st number :: ";
        cin>>a;
        cout<<"\nEnter 2nd number :: ";
        cin>>b;
        cout<<"\nEnter 3rd number :: ";
        cin>>c;
        cout<<"\nEnter 4th number :: ";
        cin>>d;
        cout<<"\nEnter 5th number :: ";
        cin>>e;

        cout<<"\nSum of 5 Numbers [ "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<e<<" ] = "<<sum(a,b,c,d,e)<<"\n";
        cout<<"\nProduct of 5 Numbers [ "<<a<<"*"<<b<<"*"<<c<<"*"<<d<<"*"<<e<<" ] = "<<mul(a,b,c,d,e)<<"\n";

        return 0;
}