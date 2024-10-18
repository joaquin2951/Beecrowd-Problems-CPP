#include <iostream>
#include <iomanip>
using namespace std;
#define TAM 100

void imprimir_matriz(const int M[][TAM], const int tamanho);
void cargar_matriz(int M[][TAM], const int tamanho);

int main(int argc, char *argv[]) {
	
	int N;
	
	
	do{
		
		cin >> N;
		int M[TAM][TAM];
		
		if(N != 0){
			cargar_matriz(M,N);
			imprimir_matriz(M,N);
		}
			
		
		
		
	} while(N != 0);
	
	
	
	return 0;
}

void cargar_matriz(int M[][TAM], const int tamanho){

	int CantMovF = tamanho - 1, CantMovC = tamanho - 1;
	int valorBorde = 1;
  int colInit = 0, filInit = 0;
	int c, f;
	int Mov;
	
	
	while(CantMovF > 0 or CantMovC > 0){
		
		
		c = colInit; Mov = 0;
		//llenamos para la derecha
		for(Mov; Mov <= CantMovC; Mov++){
			M[filInit][c++] = valorBorde;
		}
		c--; 
		
		
		f = filInit; Mov= 0;
		//llenamos para abajo
		for(Mov; Mov <= CantMovF; Mov++){
		  M[f++][c] = valorBorde;	
		}
		f--; CantMovF--;
		
		
		Mov = 0;
		//llenamos para izquierda
		for(Mov; Mov <= CantMovC; Mov++){
			M[f][c--] = valorBorde;
		}
		c++; CantMovC-=2;
		
		
		Mov = 0;
		//llenamos para arriba
		for(Mov; Mov <= CantMovF; Mov++){
			M[f--][c] = valorBorde;
		}
		
		f++; CantMovF--; 
		
		colInit = c + 1; filInit = f;
		
		valorBorde++;
		
	}//fin WHILE
	
	
	if((tamanho - 1) % 2 == 0)
				M[(tamanho-1) / 2][(tamanho-1) / 2] = valorBorde;
}





void imprimir_matriz(const int M[][TAM], const int tamanho){
	
	
	for(int i=0;i<tamanho;i++){
		for(int j=0;j<tamanho;j++){
			if(j==0){
				cout<<setw(3)<<M[i][j];
			}else {
				cout<<setw(4)<<M[i][j];
			}
		}
		cout<<endl;
	}
	cout<<endl;
	
}
	
	
