#include <iostream>  
using namespace::std;  
int main()   
{  
    char char_array[] = {'V','A','I','B','H','A','V'};  
    int array_size = sizeof(char_array) /  
    sizeof(char);  
    string v = "";  
    int i;  
    for(i = 0; i < array_size; i++)  
   {     
		v= v + char_array[i];  
    }  
    cout << v <<endl;  
}