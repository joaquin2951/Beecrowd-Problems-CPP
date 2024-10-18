#include <iostream>
#include <cmath>
using namespace std;

#define FILAS 10
#define COLUMNAS 3


float dist(int x1, int y1, int z1, int x2, int y2, int z2);
void cargar_matriz(int M[][COLUMNAS],const int TL);

int main(int argc, char *argv[]) {
	
	int M[FILAS][COLUMNAS];
	
	int cantNaves;
	
	cin >> cantNaves;
	
	cargar_matriz(M,cantNaves);
	
	
	//buscamos la nave más cercana para cada Nave
	
	
	
	for(int f = 0; f < cantNaves; f++){//comparamos cada nave
		
		float distancia = -1;//[0,20] alta, (20,50] media, (50,100] bajo
		//distancia = -1;
		float aux;
		
		for(int nav = 0; nav < cantNaves; nav++){//Con las demás naves
			
			if(f != nav){
				
				
				aux = dist(M[f][0],M[f][1],M[f][2],M[nav][0],M[nav][1],M[nav][2]);
				
				if(aux < distancia or distancia == -1)
					distancia = aux; 
				
			}
			
			
		}//termino de encontrar la distancia mas pequeña
		
		if(distancia > 0){
			
			if(distancia <= 20)
				cout << 'A' << endl;
			else if(distancia > 20 and distancia <= 50)
				cout << 'M' << endl;
			else
				cout << 'B' << endl;
		
		}
		
	}
	
	
	
	return 0;
}

void cargar_matriz(int M[][COLUMNAS],const int TL){
	
	for(int i = 0; i < TL; i++)
		for(int j = 0; j < COLUMNAS; j++)
			cin >> M[i][j];
		
}

float dist(int x1, int y1, int z1, int x2, int y2, int z2){
	return sqrt( pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2) );
}
