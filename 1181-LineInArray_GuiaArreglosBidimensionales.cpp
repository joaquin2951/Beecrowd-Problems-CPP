#include <iostream>
#include <iomanip>
using namespace std;



void cargarMatriz(float numbers[][12],const int filas,const int columnas);
float sumOrprom(const float numbers[][12],const int fila,const int columnas,const char opcion);
int main() {
	const int TF =12;
	float numbers[TF][TF];
	char opcion;
	int fila;
	
	cin >> fila >> opcion;
	cargarMatriz(numbers,TF,TF);
	cout << fixed << setprecision(1) << sumOrprom(numbers,fila,TF,opcion) << endl;
	
	
	return 0;
}

float sumOrprom(const float numbers[][12],const int fila,const int columnas,const char opcion){
	float suma = 0.0;
	for(int col = 0; col < columnas; col++)
		suma = suma + numbers[fila][col];
		
		if(opcion == 'M')
			suma = suma / (float)columnas;
		
		return suma;
}

void cargarMatriz(float numbers[][12],const int filas,const int columnas){
	
	for(int fil = 0; fil < filas; fil++){
		for(int col = 0; col < columnas; col++){
			cin >> numbers[fil][col];
		}
	}
	
}
