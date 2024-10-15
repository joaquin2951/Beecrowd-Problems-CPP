#include <iostream>
using namespace std;

void cargarMatriz(int M[][100], const int filas, const int columnas);
void modificarMatriz(int newM[][100],const int M[][100], const int filas, const int columnas);
int cantAdyacentes(const int M[][100], const int fil, const int col, const int filasT, const int columnasT);

int main(int argc, char *argv[]) {
	
	int M[100][100];
	int newM[100][100];
	
	int filas, columnas;
	

	
	
	while(cin >> filas >> columnas){
		cargarMatriz(M,filas,columnas);
		modificarMatriz(newM,M,filas,columnas);
		
		for(int i = 0; i < filas; i++){
			for(int j = 0; j < columnas; j++){
				cout << newM[i][j];
			}
			cout << endl;
		}
		
	}
	
	

	
	
	
	
	return 0;
}



int cantAdyacentes(const int M[][100], const int fil, const int col, const int filasT, const int columnasT){
	int contador = 0;
	
	if(fil != filasT - 1){//puedo sumar el de abajo
		if(M[fil+1][col] != 0)
			contador++;
	}
	
	if(fil != 0){//puedo sumar el de arriba
		if(M[fil-1][col] != 0)
			contador++;
	}
	
	if(col != 0){//puedo sumar los de izquierda
		if(M[fil][col-1] != 0)
			contador++;
	}
	
	if(col != columnasT - 1){//puedo sumar los de la derecha
		if(M[fil][col+1] != 0)
			contador++;
	}
	
	
	return contador;
}

void modificarMatriz(int newM[][100], const int M[][100], const int filas, const int columnas){
	
	
	for(int i = 0; i < filas; i++){
		
		for(int j = 0; j < columnas; j++){
			
			if(M[i][j] == 0)
				newM[i][j] = cantAdyacentes(M,i,j,filas,columnas);
			else
				newM[i][j] = 9;
			
		}
	}
	
	
}

void cargarMatriz(int M[][100], const int filas, const int columnas){
	
	for(int i = 0; i < filas; i++)
		for(int j = 0; j < columnas; j++)
			cin >> M[i][j];
		
	
}
