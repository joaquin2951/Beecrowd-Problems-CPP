#include <iostream>
#include <cmath>
using namespace std;

long long int bacillit(long long int momento);


int main() {
	int casos;
	long long int resultado,momentos;
	
	cin >> casos;
	
	for(int i = 0; i < casos; i++){
		
		cin >> momentos;
		
		if(momentos >= 1  and momentos <= 10000000){
			resultado = bacillit(momentos) % 1000;
			
			if(resultado < 100){
				if(resultado < 10)
					cout << "00" << resultado << endl;
				else
					cout << "0"  << resultado << endl;
			}else
				 cout << resultado << endl;
		}
		
		
	}
	
	return 0;
}





long long int bacillit(long long int momento){
	long long int anterior = 1, anterioranterior = 1, resultado;
	
	if(momento == 1 or momento == 2)
		resultado = 1;
	else{
		for(int i = 3; i <= momento; i++){
			resultado = (anterior%1500 + anterioranterior%1500)%1500;
			anterioranterior = anterior;
			anterior = resultado;
		}
	}
	
	return resultado;
}

