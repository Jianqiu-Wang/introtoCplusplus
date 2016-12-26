/* Write a program that loops indefinitely. 
In each iteration of the loop, read in an integer N (declared as an int)
 that is inputted by a user, 
 output N5 if N is nonnegative and divisible by 5, and -1 otherwise. */

#include <iostream>
using namespace std;

int main() {
	while (true) {
		int N;
		cin >> N;
		cout << (( N >= 0 ) && ( N % 5 == 0 )) ? N:-1;
	}
}