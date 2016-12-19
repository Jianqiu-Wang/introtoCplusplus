// Hello World for loop
#include <iostream>
using namespace std;

int main() {
	const char * string = "Hello, WOrld\n";
	
	int n;
	cin >> n;

	// for loop
	for( int i = 0; i < n; i++ ){
		cout << string;
	}

	// while loop
	int j = 0;
	while( j < n){
		cout << string;
		j++;
	}

	// do loop 
	int k = 0;
	do {
		cout << string;
		k++;
	} while ( k< n );
}