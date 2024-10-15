#include <iostream>
using namespace std;

#define TAM 9

void cargarMatriz(int M[][TAM]);

bool enterosEnCadaFila(const int M[][TAM],const int filaMAX);
bool enterosEnCadaColumna(const int M[][TAM], const int colMAX);
bool estaNumero(const int M[], const int valor, const int TL);
bool enterosEnCadaMatriz(const int M[][TAM]);
bool estaNumeroEnMatriz(const int M[][TAM], const int valor, const int fil);
bool esSudoku(const int M[][TAM], const int fc);

int main(int argc, char *argv[]) {
	
	
	
	
	
	int instancias, i = 0;
	
	cin >> instancias;
	
	while(i < instancias){
		
		int M[TAM][TAM];
		cargarMatriz(M);
	
		cout << "Instancia " << i+1 << endl;
	
		
		
		if(esSudoku(M,TAM))
			cout << "SIM" << endl;
		else
			cout << "NAO" << endl;
		
		
		i++;
		
	}
	
	
	
	return 0;
}

bool esSudoku(const int M[][TAM], const int fc){
	
		
	if(enterosEnCadaFila(M,fc)  and
		 enterosEnCadaMatriz(M) and
		 enterosEnCadaColumna(M,fc))
		return true;
	
	return false;
}

bool estaNumero(const int M[], const int valor, const int TL){
	int i = 0;
	while(i < TL){
		if(M[i] == valor)
			return true;
		i++;
	}
	return false;
}

	bool estaNumeroEnMatriz(const int M[][TAM], const int valor, const int fil, const int col){
		
		int filaMAX = fil + 3;
		int colACT = col - 2;
		
		for(int f = fil; f < filaMAX; f++){
			for(int c = colACT ; c <= col; c++){
				if(M[f][c] == valor)
					return true;
			}
		}
		
		
		return false;
	}
	
	
	bool enterosEnCadaMatriz(const int M[][TAM]){
		
		
		for(int col = 0; col < TAM; col++){
			
			
			if(col % 3 == 2){
				
				int numBuscado = 1;
				
				while(numBuscado < 10){
					
					if(!estaNumeroEnMatriz(M,numBuscado,0,col) or
						 !estaNumeroEnMatriz(M,numBuscado,3,col) or
						 !estaNumeroEnMatriz(M,numBuscado,6,col))
						return false;
					
					numBuscado++;
					
				}
				
				
			}
			
			
		}
		
		
		return true;
	}
	
	bool enterosEnCadaColumna(const int M[][TAM], const int colMAX){
		
		int f = 0;
		bool esta = true;
		
		while(f < TAM and esta){
			
			
			int num = 1;
			
			
			while(num < 10 and esta){
				
				esta = false;
				int c = 0;
				
				while(c < TAM and !esta){//recorro columnas
					if(M[f][c] == num)
						esta = true;
					
					c++;
				}
				
				
				num++;
			}
			
			f++;
		}
		
		
		return esta;
	}
		
		
		bool enterosEnCadaFila(const int M[][TAM], const int filaMAX){
			
			for(int fil = 0; fil < filaMAX; fil++){
				int i = 1;
				while(i < 10){
					if(!estaNumero(&M[fil][0],i,filaMAX))
						return false;
					i++;
				}
			}
			
			return true;
		}


void cargarMatriz(int M[][TAM]){
	for(int i = 0; i < TAM; i++)
		for(int j = 0; j < TAM; j++)
		cin >> M[i][j];
}
