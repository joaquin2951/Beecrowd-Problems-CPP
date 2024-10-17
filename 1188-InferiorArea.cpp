#include <iostream>
#include <iomanip>
using namespace std;

#define TAM 12

void cargarMatriz(float M[][TAM],const int cf);
float sumaOpromElementos(const float M[][TAM], const char opt);

int main(int argc, char *argv[]) {
		float M[TAM][TAM];
		char op;
		cin >> op;
		cargarMatriz(M,TAM);
		
		
		float total;
		
		total = sumaOpromElementos(M,op);
		
		cout << fixed << setprecision(1) << total << endl;
		
	return 0;
}


void cargarMatriz(float M[][TAM],const int cf){
	for(int i = 0; i < cf; i++)
		for(int j = 0; j < cf; j++)
		cin >> M[i][j];
}

float sumaOpromElementos(const float M[][TAM], const char opt){
		float total = 0.0;
		int cantElementos = 0;
		
		int colInit = 1, colFin = TAM - 2, filaTope = TAM - 2;
		int fila;
		
		while(colInit < colFin){
			
			fila = TAM - 1;
			
			while(fila > filaTope){
			
				total+=M[fila][colInit] + M[fila][colFin];
				cantElementos+=2;
				fila--;
				
			}
			
			filaTope--;
			colInit++;
			colFin--;
		}
		
		
		
		if(opt == 'M')
			total/=(float)cantElementos;
		
		return total;
}
