#include <iostream>
#include <iomanip>
using namespace std;

#define TAM 100

void mostrarM(const int M[][TAM], const int N);
void cargarM(int M[][TAM], const int N);

int main(int argc, char *argv[]) {

	int M[TAM][TAM];
	int N = -1;
	
	while(N != 0){
		
		cin >> N;
		
		if(N != 0){
			
			cargarM(M,N);
			mostrarM(M,N);
			
		}
		
	}
	
	
	return 0;
}

void cargarM(int M[][TAM], const int N){
	
	for(int f = 0; f < N; f++){
		
		for(int c = 0; c < N; c++){
			
			if(f == 0)
				M[f][c] = c + 1;
			else if(c == 0)
				M[f][c] = f + 1;
			else 
				M[f][c] = M[f-1][c-1];
				
			
		}
		
	}
	
}


void mostrarM(const int M[][TAM], const int N)
{
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(j == 0)
				cout << setw(3) << M[i][j];
			else
				cout << setw(4) << M[i][j];
		}
		cout << endl;
	}
		cout << endl;
}

