#include <iostream>
using namespace::std;
void findSize(int arr[])
{
	cout << sizeof(arr) << endl;
}
int main()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);
	return 0;
}
