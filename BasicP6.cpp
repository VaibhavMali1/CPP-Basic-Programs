#include <iostream>
#include <cmath>
using namespace::std;
int main () {
	double T4Tutorials;
	double WindTemperature;
   	double Wind, WindChill;
 	cout << "Please Enter the windTemperature: ";
   	cin >> WindTemperature;
   	cout << endl << "Please Enter the speed of wind: ";
   	cin >> Wind;
   	T4Tutorials = pow (Wind, 0.16);
   	WindChill = 35.74 + 0.6215*WindTemperature - 35.75*T4Tutorials + 0.4275*T4Tutorials*WindTemperature;
   	cout << endl << "The wind chill is observed and its: " << WindChill << endl;
   	return (0);
}