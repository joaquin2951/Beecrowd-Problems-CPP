#include <iostream>
using namespace std;
#define TAM 8

void cargar_matriz(int M[][TAM], const int TL);
void Transposta(int M[][TAM], const int TL);
void Troca(int M[][TAM], const int TL, const int col1, const int col2);
void transformar(int M[][TAM], const int TL);

int main(int argc, char *argv[]) {
	
	int M[TAM][TAM];
	int cases;
	
	cout << "casos: ";
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
		
		int N;
		
		cout << "tamaño: ";
		cin >> N; // N contenido en (1,8)
		
		cargar_matriz(M,N); //Cargamos los elementos de la matriz
		
		Transposta(M,N);
		
		
		for(int f = 0; f < N; f++){
			
			for(int c = 0; c < N; c++)
				cout << M[f][c] << " ";
			cout << endl;
		}
		
		
	}
	
	return 0;
}


void transformar(int M[][TAM], const int TL){
	
	
	//hallamos alguna columna que tenga todos uno
	bool sonUnos;
	int posUnos = -1;
	
	while(c < TL && posUnos == -1){//recorremos columnas
		
		sonUnos = true;
		
		while(f < TL && sonUnos){//recorremos filas
			
			if(M[c][f] != 1)
				sonUnos = false;//NO son todos 1 en esa columna
			
			f++;
		}
		
		if(sonUnos)
					posUnos = c;//se guarda la columna que tiene TODOS uno
		
		c++;
	}
	
	if(posUnos != -1){//hay una columna con TODOS uno
		Troca(M,TL,0,posUnos);//la ponemos en la columna 0
		
		c = 1; f = 0;
		
		for(f; f < TL; f++){
			
			for(c; c < TL; c++){
				
				
			}
			
		}
		
		
		
		
	}
	else{//hay que recorrer las filas
		
	}
	
	
	
}



void Transposta(int M[][TAM], const int TL){
	
		
			//intercambio fila por columna
			int fil = 0;
			int intercambios = 0;
			
			while(fil < TL)
			{
				for(int c = 0; c < fil; c++){
					
					swap( M[fil][c] , M[c][fil] ); 
					cout << "intercambio: " << M[fil][c] << " | " << M[c][fil] << endl;
				}
				
				fil++;
				intercambios++;
			}
			
			
		
}
	
	


void Troca(int M[][TAM], const int TL, const int col1, const int col2){
	
	for(int f = 0; f < TL; f++){
		
		swap(M[f][col1],M[f][col2]);
		
	}
	
	
}

void cargar_matriz(int M[][TAM], const int TL){
	for(int i = 0; i < TL; i++)
		for(int c = 0; c < TL; c++)
			cin >> M[i][c];
}
