#include <iostream>
#include <iomanip>
using namespace std;

#define TAM 12


void cargarMatriz(float M[][TAM],const int cf);
float calcularSoM(const float M[][TAM], const int cf, const char option);


int main(int argc, char *argv[]) {

	float M[TAM][TAM], total;
	char opt;
	
	cin >> opt;//S o M
	
	cargarMatriz(M,TAM); //carga de Elementos
	
	total = calcularSoM(M,TAM,opt);
	
	cout << fixed << setprecision(1) << total << endl;
	
	
	return 0;
}


float calcularSoM(const float M[][TAM], const int cf, const char option){
	float	total = 0.0;
	
	int filaInit = 1, filaFin = cf - 2;
	int col, colTope = 1, cantElementos = 0;
	
	while(filaInit < filaFin){
		
		col = 0;
		
		while(col < colTope){
			
			total+=M[filaInit][col] + M[filaFin][col];
			cantElementos+=2;
			col++;
			
		}
		
		colTope++;
		filaInit++; filaFin--;
	}
	
	if(option == 'M')
				total = total / (float)cantElementos;
	
	return total;
}


void cargarMatriz(float M[][TAM],const int cf){
	for(int i = 0; i < cf; i++)
		for(int j = 0; j < cf; j++)
		cin >> M[i][j];
}
