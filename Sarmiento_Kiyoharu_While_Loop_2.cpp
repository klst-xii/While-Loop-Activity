#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int x = 1;
   	int count = 0;
  	
  	cout << "SQUARE ROOTS OF THE FIRST 25 ODD POSITIVE INTEGERS\n\n";
  	
	while (count < 25) {
   		cout << "Square root of " << x << " = " << sqrt(x) << "\n";
       	x+=2;
       	count++;
	   	}	

   return 0;

}
