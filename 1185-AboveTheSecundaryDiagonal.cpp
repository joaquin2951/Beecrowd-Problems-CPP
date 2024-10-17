#include <iostream>
#include <iomanip>
using namespace std;

#define TAM 12

void cargarMatriz(float M[][TAM],const int cf);
float sumaElementos(float M[][TAM], const int cf);
float promElementos(float M[][TAM], const int cf);

int main(int argc, char *argv[]) {
	float M[TAM][TAM]; 
	char O;
	float total;
	
	cin >> O; // S o M
	
	cargarMatriz(M,TAM);
	
	if(O == 'S')
		total = sumaElementos(M,TAM);
	else
		if(O == 'M')
		total = promElementos(M,TAM);
	
	cout << fixed << setprecision(1) << total << endl;
	
	return 0;
}



void cargarMatriz(float M[][TAM],const int cf){
	for(int i = 0; i < cf; i++)
		for(int j = 0; j < cf; j++)
		cin >> M[i][j];
}

	
float sumaElementos(float M[][TAM], const int cf){
	int ultFila = cf - 1;
	int ultCol = cf - 1;
	float suma = 0.0;
	
	for(int fil = 0; fil < ultFila; fil++){
		
		for(int col = 0; col < ultCol; col++){
			
			suma+=M[fil][col];
			
		}
		ultCol--;
	}
	
	
	return suma;
}
	
	
float promElementos(float M[][TAM], const int cf){
	int ultFila = cf - 1;
	int ultCol = cf - 1;
	int cantElementos = 0;
	float prom = 0.0;
	
	for(int fil = 0; fil < ultFila; fil++){
		
		for(int col = 0; col < ultCol; col++){
			
			prom+=M[fil][col];
			cantElementos++;
			
		}
		ultCol--;
	}
	
	
	return prom / (float)cantElementos;
}
