#include <iostream>
using namespace std;

int main() {
	const int TF = 20;
	int vec[TF];
	
	for(int i = 0; i < TF ; i++)
		cin >> vec[i];
	
	for(int i = 0; i < TF/2 ; i++){
		int aux;
		aux = vec[i];
		vec[i] = vec[TF-1-i];
		vec[TF-1-i] = aux;
	}
	
	for(int i = 0; i < TF ; i++)
		cout << "N[" << i << "] = " << vec[i] << endl;
	
		
	return 0;
}

