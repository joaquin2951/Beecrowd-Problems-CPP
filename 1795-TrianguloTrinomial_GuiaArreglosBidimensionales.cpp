#include <iostream>
using namespace std;

#define C 43

//void imprimir_matriz(const int M[][C], const int cc, const int cf);
void hacerTrinomial(int M[][C], const int cc, const int cf);
long long int sumaFila(const int M[][C], const int filaElegida, const int cc);

int main() {
		int M[21][C] = {0};
		int R;
		hacerTrinomial(M,C,21);
		//imprimir_matriz(M,C,21);
		
		cin >> R;
		
		if(R >= 0 and R <= 20)
			cout << sumaFila(M,R,C) << endl;
		
		
	return 0;
}

long long int sumaFila(const int M[][C], const int filaElegida, const int cc){
	long long int suma = 0;
	
		for(int col = 0; col < cc; col++){
			
				suma = suma + M[filaElegida][col];
			
		}
		
		return suma;
}

void hacerTrinomial(int M[][C], const int cc, const int cf){
	  int mitad = (cc/2)+1;
		M[0][mitad] = 1;
		for(int fila = 1; fila < cf; fila++){
			for(int col = 0; col < cc; col++){
				
				if(col == 0){
					M[fila][col] = M[fila-1][col] + M[fila-1][col+1];
				}else if(col == cc-1){
					M[fila][col] = M[fila-1][col] + M[fila-1][col-1];
				}else{
					M[fila][col] = M[fila-1][col] + M[fila-1][col-1] + M[fila-1][col+1];
				}
			
			}
		}
}


		/*
void imprimir_matriz(const int M[][C], const int cc, const int cf){
	for(int i = 0; i < cf * cc; i++){
		int filas = i / cc, columnas = i % cc;
		if(columnas == 0)
			cout << endl;
		
		cout << M[filas][columnas] << " ";
		
	}
}

*/
