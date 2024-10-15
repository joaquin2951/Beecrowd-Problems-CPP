#include <iostream>
using namespace std;


//Si la línea sólo contiene ceros, entonces todas las filas 
//por debajo también contienen solo ceros.
	
//Caso contrario, si X es el elemento distinto de cero
//más a la izquierda de la línea; 
//Entonces, para todas las líneas debajo de la línea que contiene a X,
//todos los elementos en las columnas a la izquierda de X
//y la columna que contiene a X son cero.

void cargarMatriz(int M[][500], const int fil, const int col);
bool esEscalera(const int M[][500], const int fil, const int col);
bool esFilaNUla(const int M[][500], const int fil, const int col);
bool sonNulosDebajo(const int M[][500], const int filAct, const int filMax, const int colAct);

int main(int argc, char *argv[]) {
	int M[500][500];
	int fil,col;
	
	cin >> fil >> col;
	
	cargarMatriz(M,fil,col);
	
	if(esEscalera(M,fil,col))
		cout << 'S' << endl;
	else
		cout << 'N' << endl;
	
	
	return 0;
}

bool esFilaNUla(const int M[], const int col){
	for(int i = 0; i < col; i++)
		if(M[i] != 0)
			return false;
	return true;
}

	
bool sonNulosDebajo(const int M[][500], const int filAct, const int filMax, const int colAct){
	
	
	for(int f = filAct+1; f < filMax; f++){
		
		for(int col = colAct; col >= 0; col--){
							if(M[f][col] != 0)
								return false;
		}
		
	}
	
	return true;
}

	
bool esEscalera(const int M[][500], const int fil, const int col){
	

	
	for(int fila = 0 ; fila < fil; fila++){
		
		if(fila < fil - 1 and 
			 esFilaNUla(&M[fila][0], col) and
			 !esFilaNUla(&M[fila+1][0],col))
			return false;
	
		else{
			int columna = 0;
			
			while(M[fila][columna] == 0 and columna < col){
				columna++;
			}//encuentro una columna distinto de 0
			
			if(columna == col)
				columna--;
			
			//todos debajo deben ser nulos
			if(!sonNulosDebajo(M,fila,fil,columna))
				return false;
		}
		
	}
	
	
	
	return true;
}

void cargarMatriz(int M[][500], const int fil, const int col){
	for(int i = 0; i < fil; i++)
		for(int j = 0; j < col; j++)
		cin >> M[i][j];
}
