#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define TAM 15

void imprimirM(const int M[][TAM], const int N);
void generarM(int M[][TAM], const int N);
int contarDigitos(int N);

int main(int argc, char *argv[]) {

	int M[TAM][TAM];
	int N;
	
	
	while(N != 0){
		
		cin >> N;
		
		if(N != 0){
			
			generarM(M,N);
			
			imprimirM(M,N);
			
			
		}
		
		
	}
	
	return 0;
}

void generarM(int M[][TAM], const int N){
	int c;
	
	
	
	for(int fil = 0; fil < N; fil++){
		
		c = pow(2,fil);
		
		for(int col = 0; col < N; col++){
			M[fil][col] = c;
			
			c*=2;
		}
	}
	
}

int contarDigitos(int N){
	int dig = 0;
	
	while(N > 0){
		dig++;
		N=N/10;
	}
	
	return dig;
}

void imprimirM(const int M[][TAM], const int N){
	
	int numMasGrande = M[N-1][N-1];
	int cantDigitos = contarDigitos(numMasGrande);
	
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(j == 0)
				cout << setw(cantDigitos) << M[i][j];
			else
				cout << setw(cantDigitos+1) << M[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
