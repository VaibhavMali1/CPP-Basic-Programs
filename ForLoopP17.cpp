#include <iostream>
using namespace::std;
int main() {
 
  for (int x = 1; x <= 10; ++x) {
 
  if (x == 5) {
 
    continue;
 
  }
 
     cout << "Current value of x= " << x << endl;
 
  }
 
  return 0;
 
}