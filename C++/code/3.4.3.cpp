/* Same with 3.4.2 except breaking out the loop if entering any negative number*/
#include <iostream>
using namespace std;

int main() {
	while (true) {
		int N;
		cin >> N;
		

		if (( N >= 0 ) && ( N % 5 == 0 )) {
			cout << N << endl;
		}
		else if ( N <= 0 ) {
			cout << "Goodbye!" << endl;
			break;
		}
		else {
			continue;	
		}
	}
	
}