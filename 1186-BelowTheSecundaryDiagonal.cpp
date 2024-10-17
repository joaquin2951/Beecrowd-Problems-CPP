#include <iostream>
#include <iomanip>
using namespace std;

#define TAM 12

void cargarMatriz(float M[][TAM],const int cf);
float sumaOpromElementos(const float M[][TAM], const int cf, const char option);

int main(int argc, char *argv[]) {

	float M[TAM][TAM], total;
	char option;

	
	cin >> option;
	
	cargarMatriz(M,TAM);
	
	total = sumaOpromElementos(M,TAM,option);

	
	cout << fixed << setprecision(1) << total << endl;
	
	
	return 0;
}


float sumaOpromElementos(const float M[][TAM], const int cf, const char option){
	float suma = 0.0;
	int cantElementos = 0;
	int limiteCol = 0;
	
	for(int fil = cf - 1; fil > 0; fil--){
		for(int col = cf - 1; col > limiteCol; col--){
			
			suma+=M[fil][col];
			cantElementos++;
		
		}
		limiteCol++;
	}
	
	if(option == 'M')
		suma = suma / (float) cantElementos;
	
	return suma;
}




void cargarMatriz(float M[][TAM],const int cf){
	for(int i = 0; i < cf; i++)
		for(int j = 0; j < cf; j++)
		cin >> M[i][j];
}
