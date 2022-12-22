#include<iostream>
using namespace::std;
int main()
{
    char gender;
    int age;
    cout<<"\nEnter Your Age: ";
    cin>>age;
    if(age>=18)
    {
        cout<<"\nEnter Your Gender: ";
        cin>>gender;
        if(gender=='M' || gender=='m')
        {
             cout<<"\nGo To Room-5";
        }
        else  if(gender=='F' || gender=='f')
        {
             cout<<"\nGo To Room-6";
        }
        else
        {
            cout<<"\n Invalid Gender Input";
        }
    }
    else
    {
        cout<<"\nYour Age is Under 18 You are Not Eligible For Hotel Room...";
    }
    return 0;
}