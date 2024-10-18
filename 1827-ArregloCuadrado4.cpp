#include <iostream>
using namespace std;
#define TAM 101

void cargar_matriz(int M[][TAM], const int N);
void mostrarMatriz(const int M[][TAM], const int N);

int main(int argc, char *argv[]) {
	
	int M[TAM][TAM];
	
	int N;
	
	
	while(cin >> N){
		
		if(N % 2 != 0 and N >= 5 and N <= 101){
			
			cargar_matriz(M,N);
			mostrarMatriz(M,N);
			
			cout << endl;
			
		}
		
	}
	

	return 0;
}


void cargar_matriz(int M[][TAM], const int N){
	
	int limiteInternoInit = N / 3, limiteInternoFin = N - 1 - (N / 3) ;
	
	for(int f = 0; f < N; f++){
		
		
		for(int c = 0; c < N; c++){
			
			
			if(f >= limiteInternoInit and f <= limiteInternoFin and c >= limiteInternoInit and c <= limiteInternoFin){
				M[f][c] = 1;
			}
			else 
				if(f == c){
					M[f][c] = 2;
				}
				else
					if(f == N - 1 - c){
						M[f][c] = 3;
					}else{
						M[f][c] = 0;
					}
			
		}
		
	}
	
	M[N/2][N/2] = 4;
}


void mostrarMatriz(const int M[][TAM], const int N){
	
	for(int f = 0; f < N; f++){
		
		for(int c = 0; c < N; c++){
			cout << M[f][c];
		}
			
			
			cout << endl;
	}
	
}
	
