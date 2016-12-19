/* Basic Statistics of a list of integers */
#include <iostream>
using namespace std;

int main(){
	int N;
	cout << "NUmber of intergers in list:";
	cin >> N;

	int num, Max = 0, Min = 0, Range;
	double Sum = 0.0, Mean;
    cin >> num;
    Max = num;
    Min = num;
    Range = Max - Min;
    Sum = num;

	for (int i = 1; i < N; i++){
		cin >> num;
		if( num > Max )
			Max = num;
		if( num < Max )
			Min = num;
		Range = Max - Min;
		Sum += num;
	}
	Mean = Sum/N;

	// Output
	cout << "Mean:" << Mean << '\n';
	cout << "Max:" << Max << '\n';
	cout << "Min:" << Min << '\n';
	cout << "Range:" << Range << '\n';



}