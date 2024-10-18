#include <iostream>
using namespace std;

void mostrarMatriz(const int M[][70], const int TL);
void generarM(int M[][70], const int TL);

int main(int argc, char *argv[]) {
	
	
	int M[70][70];
	int N;
	
	
	while(cin >> N){
		
		generarM(M,N);
		mostrarMatriz(M,N);
	}
	
	
	return 0;
}


void generarM(int M[][70], const int TL){
	
	
	for(int f = 0; f < TL; f++){
		
		
		for(int c = 0; c < TL; c++){
			
			if(f == TL - 1 - c)
				M[f][c] = 2;
			else if(f == c){
				M[f][c] = 1;
			}
			else
				M[f][c] = 3;
			
			
			
		}
		
	}
	
	
}

void mostrarMatriz(const int M[][70], const int TL){
	for(int f = 0; f < TL; f++){
		
		for(int c = 0; c < TL; c++)
			cout << M[f][c];
		
		cout << endl;
	}
		
}
