/* Same with 3.4.1 except use if - else statement and skip if N doesn't satisfy 
condition*/
#include <iostream>
using namespace std;

int main() {
	while (true) {
		int N;
		cin >> N;
		
		if (( N >= 0 ) && ( N % 5 == 0 )) {
			cout << N << endl;
		}
		else {
			continue;	
		}
	}
	
}