#include <iostream>
using namespace std;


int main() {
	const int TF = 2000;
	int vec[TF] = {0} , N, numero, mayor = 0;
	
	cin >> N;
	
	for(int i = 0; i < N ; i++){
		
		cin >> numero;
		vec[numero-1]++;
		if(numero > mayor)
			mayor = numero;
	}
		
	for(int i = 0; i < mayor; i++){
		if(vec[i] > 0)
			cout << i+1 << " aparece " << vec[i] << " vez(es)" << endl; 
	}
	
	
	return 0;
}

