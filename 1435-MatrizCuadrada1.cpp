#include <iostream>
using namespace std;
#define TAM 100

void imprimir_matriz(const int M[][TAM], const int tamanho);
void cargar_matriz(int M[][TAM], const int tamanho);

int main(int argc, char *argv[]) {
	int M[TAM][TAM];
	int N;
	
	
	do{
		
		cin >> N;
		
		if(N != 1){
			cargar_matriz(M,N);
			imprimir_matriz(M,N);
		}else
			 cout << 1 << endl;
		
		
	} while(N != 0);
	
	
	
	return 0;
}

void cargar_matriz(int M[][TAM], const int tamanho){

	int CantMovF = tamanho - 1, CantMovC = tamanho - 1;
	int valorBorde = 1;
  int colInit = 0, filInit = 0;
	int c, f;
	
	
	while(CantMovF > 0 or CantMovC > 0){
		
		
		c = colInit;
		//llenamos para la derecha
		for(c; c <= CantMovC; c++){
			M[filInit][c] = valorBorde;
		}
		c--;
		
		f = filInit;
		//llenamos para abajo
		for(f; f <= CantMovF; f++){
		  M[f][c] = valorBorde;	
		}
		f--; 
		
		
		//llenamos para izquierda
		for(c; c >= colInit; c--){
			M[f][c] = valorBorde;
		}
		c++;
		
		
		//llenamos para arriba
		for(f; f > filInit; f--){
			M[f][c] = valorBorde;
		}
		f--; CantMovF-=2; CantMovC-=2;
		
		colInit++; filInit++;
		valorBorde++;
		
	}//fin WHILE
	
	
}





void imprimir_matriz(const int M[][TAM], const int tamanho){
	for(int fil = 0; fil < tamanho; fil++){
		for(int col = 0; col < tamanho; col++){
			
			if(col < tamanho - 1)
				cout << M[fil][col] << "   ";
			else
				cout << M[fil][col];
			
		}
			
			cout << endl;
	}
}
	
	
