#include <iostream>
using namespace::std;

int main()
{
    string name[]={"Jhon","Khan","Robert","Seela"};
    
    int i=0;
    do{
            cout<<"Student name "<<i+1<<" is "<<name[i]<<endl;
    i++;
    }while(i<=3);
    return 0;
}