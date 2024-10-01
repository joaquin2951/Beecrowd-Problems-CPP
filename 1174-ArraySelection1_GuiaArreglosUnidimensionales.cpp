#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int TF = 100;
	float numbers[TF];

	for(int i = 0; i < TF; i++)
		
		cin >> numbers[i];
		
	
	
	for(int i = 0; i < TF; i++)
		
		if(numbers[i] <= 10)
			cout << "A[" << i << "] = " << fixed << setprecision(1) << numbers[i] << endl;
		
	
	return 0;
}

