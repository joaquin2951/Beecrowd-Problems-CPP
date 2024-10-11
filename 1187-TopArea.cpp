#include <iostream>
#include <iomanip>
using namespace std;

#define FILA 12
#define COLUMNA 12

void cargarMatriz(double M[FILA][COLUMNA]);
double suma(const double M[FILA][COLUMNA]);
double promedio(const double M[FILA][COLUMNA]);

int main(int argc, char *argv[]) {
	char operation;
	double M[FILA][COLUMNA];
	
	cin >> operation;
	
	cargarMatriz(M);
	
	
	if(operation == 'S'){
		
		cout << fixed << setprecision(1) << suma(M) << endl;
		
	}else 
		 if(operation == 'M'){
		cout << fixed << setprecision(1) << promedio(M) << endl;
	}
	
	
	
	return 0;
}

double promedio(const double M[FILA][COLUMNA]){
	
	double total = 0.0;
	int pasadas = 1;
	int cantNumeros = 0;
	
	while(pasadas-1 < 5){
		
		
		int colI = pasadas, colF = COLUMNA - 1 - pasadas;
		
		while(colI < colF){
			total = total +  M[pasadas - 1][colI++] + M[pasadas - 1][colF--];
			cantNumeros+=2;
		}
		
		pasadas++; 
	}
	
	return total/(double)cantNumeros;
}



double suma(const double M[FILA][COLUMNA]){
	
	double total = 0.0;
	int pasadas = 1;

	
	while(pasadas-1 < 5){
		
	
	int colI = pasadas, colF = COLUMNA - 1 - pasadas;
	
		while(colI < colF){
			total = total + M[pasadas - 1][colI++] + M[pasadas - 1][colF--];
		}
	
		pasadas++; 
	}
	
	return total;
}

void cargarMatriz(double M[FILA][COLUMNA]){
	for(int i = 0; i < FILA; i++)
		for(int j = 0; j < COLUMNA; j++)
			cin >> M[i][j];
}
