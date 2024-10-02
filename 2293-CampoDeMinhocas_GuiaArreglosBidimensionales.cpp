#include <iostream>
using namespace std;

#define F 100
#define C 100

void cargarMatriz(int mat[][C], const int filas, const int columnas);
int colMayor(const int mat[][C], const int filas, const int columnas);
//void imprimir(const int mat[][C], const int filas, const int columnas);

int main() {
	int minhocas[F][C], filas, columnas;
	
	cin >> filas >> columnas;
	cargarMatriz(&minhocas[0], filas, columnas);
	//imprimir(minhocas,filas,columnas);
	
	
	cout << colMayor(minhocas,filas,columnas) << endl;
	
	
	return 0;
}

int colMayor(const int mat[][C], const int filas, const int columnas){
	int suma;
	int max = 0;
	
	for(int col = 0; col < columnas; col++){
		suma = 0;
		
		for(int fil = 0; fil < filas; fil++){
			suma+= mat[fil][col];
		}
		
		if(suma > max)
			max = suma;
	}
	
	
	for(int fil = 0; fil < filas; fil++){
		suma = 0;
		for(int col = 0; col < columnas; col++){
			suma+= mat[fil][col];
			
			
			if(suma > max)
				max = suma;
		}
	}
	
	return max;
}

void cargarMatriz(int mat[][C], const int filas, const int columnas){
	for(int i = 0; i < filas * columnas; i++){
		int fil = i / columnas, col = i % columnas;
		cin >> mat[fil][col];
	}
}

	/*
void imprimir(const int mat[][C], const int filas, const int columnas){
		for(int i = 0; i < filas * columnas; i++){
			int fil = i / columnas, col = i % columnas;
			if(col == 0)
				cout << endl;
			cout << mat[fil][col] << " ";
		}
}
	*/
