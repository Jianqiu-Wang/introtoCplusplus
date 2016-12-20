/* Find the first N prime number */
#include <iostream>
using namespace std;

int main() {
	int N, i = 0, j = 2;
	cin >> N;

	while ( i < N) {
		bool flag = true;
		
		for (int k = 2; k < j; k++ ){
			if (j % k == 0){
				flag = false;
				break;
			}
		}	

		if ( flag == true) {
			cout << j <<'\n';
			i++;
		}
		j++;
	}
}