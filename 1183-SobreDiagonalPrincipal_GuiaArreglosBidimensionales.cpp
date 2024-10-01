#include <iostream>
#include <iomanip>
using namespace std;

void cargarMatriz2(float M[][12],const int cf, const int cc);
float sobre_Diagonal(const float M[][12], const int cf, const int cc, const char opcion);

int main() {
	const int TF = 12;
	float M[TF][TF];
	char opcion;
	
	cin >> opcion;
	cargarMatriz2(M,TF,TF);
	
	cout << fixed << setprecision(1) <<sobre_Diagonal(M,TF,TF,opcion) << endl;
	
	
	
	return 0;
}



void cargarMatriz2(float M[][12],const int cf, const int cc){
	
	for(int i = 0; i < cf*cc; i++){
		int fila = i / cc, columna =  i % cc;
		cin >> M[fila][columna];
	}
	
}

float sobre_Diagonal(const float M[][12], const int cf, const int cc, const char opcion){
		float suma = 0.0;
		
		for(int i = 0; i < cf*cc; i++){
			int fila = i/cc, columna = i % cc;
			if(columna > fila)
				suma = suma + M[fila][columna];
		}
		
		if(opcion == 'M')
			suma = suma / (float)( ( (cc*cf) - cc ) / 2.0);
		return suma;
}
