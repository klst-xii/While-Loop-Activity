#include <iostream>
using namespace std;

int main() {
	
	double xValue;
	
	cout << "Enter your value: ";
	cin >> xValue;
	
	while(xValue > -0.1) {
		cout << xValue << "\n";
		xValue = xValue - 0.5;
	
	}
	
	cout << "\n" << "The next value is no longer a positive integer";
	
	return 0;
	
}
