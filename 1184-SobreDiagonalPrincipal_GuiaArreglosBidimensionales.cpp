#include <iostream>
#include <iomanip>
using namespace std;


void cargarMatriz2(float M[][12], const int cf, const int cc);
float bajo_Diagonal(float M[][12], const int cf, const int cc, const char opcion);

int main() {
	float M[12][12];
	char opcion;
	
	cin >> opcion;
	cargarMatriz2(M,12,12);
	
	cout << fixed << setprecision(1) << bajo_Diagonal(M,12,12,opcion) << endl;
	return 0;
}

float bajo_Diagonal(float M[][12], const int cf, const int cc, const char opcion){
	float suma = 0.0;
	for(int i = 0; i < cc*cf ; i++){
		int fila = i / cc, columna = i % cc;
		if(fila > columna)
			suma = suma + M[fila][columna];
	}
	
	if(opcion == 'M')
		suma = suma / (float)( ( (cf*cc) - cf)  / 2.0);
	return suma;
}

void cargarMatriz2(float M[][12], const int cf, const int cc){
	
	for(int i = 0; i < cf*cc ; i++){
		int fila = i / cc, columna = i % cc;
		cin >> M[fila][columna];
	}
	
}
