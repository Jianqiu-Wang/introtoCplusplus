/* Multiply two integers */
#include <iostream>
using namespace std;

int main() {
	int a, b, accumulator = 0;
	cin >> a >> b;

   // Write number b in base 2, then multiply digit by digit, add all sums
	while (true) {
		if ( b == 0) break;
		accumulator +=	( (b % 2 == 1) ? a : 0 ); 
     	//cout << accumulator << "\n";
		b /= 2;
		a *= 2;
	}

	cout << accumulator << "\n";
}