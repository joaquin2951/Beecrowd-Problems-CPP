#include <iostream>
using namespace std;

int main() {
	const int TF = 1000;
	int vec[TF], TL, menor, posicion = 0;
	
	cin >> TL;
	
	for(int i = 0; i < TL; i++){
		cin >> vec[i];
		
		if(i == 0)
			menor = vec[i];
		else 
			if(menor > vec[i]){
			menor = vec[i];
			posicion = i;
		}
	}
	
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicion << endl;
	
	return 0;
}

