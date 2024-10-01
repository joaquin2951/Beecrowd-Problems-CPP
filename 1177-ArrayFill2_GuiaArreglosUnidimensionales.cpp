#include <iostream>
using namespace std;

int main() {
	const int TF = 1000;
	int vec[TF], T, contador = 0;
	
	cin >> T;
	
	
	for(int i = 0; i < TF; i++){
		
		if(contador == T)
			contador = 0;
		
		vec[i] = contador;
		contador++;
	}
	
	for(int i = 0; i < TF ; i++)
		cout << "N[" << i << "] = " << vec[i] << endl;
	
	return 0;
}

