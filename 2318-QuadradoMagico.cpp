#include <iostream>
#include <iomanip>
using namespace std;
#define TAM 3


void imprimirM(const int M[][TAM],const int TL);
void cargarM(int M[][TAM],const int TL);
void corregirM(int M[][TAM], const int TL);

int main(int argc, char *argv[]) {
	
	
	int M[TAM][TAM];
	
	cargarM(M,3);
	corregirM(M,3);
	imprimirM(M,3);
	
	
	return 0;
}


void corregirM(int M[][TAM], const int TL)
{
	int suma;
	
	int f = 0, c;
	bool sumado;
	bool sumaEncontrada = false;
	
	while(f < TL && !sumaEncontrada){//RECORRO FILAS
		
		suma = 0; sumado = true;
		c = 0;
		
		while(c < TL and sumado){
			
			if(M[f][c] == 0){
				
				sumado = false;
				suma = 0;
				
			}
			else{
				suma+= M[f][c];
			}
			
			
			c++;
		}
		
		if(suma != 0)
					sumaEncontrada = true;
		
		f++;
	}
	
	if(!sumaEncontrada){//RECORRO COLUMNAS
		
		c = 0;
		
		while(c < TL && !sumaEncontrada){
			
			suma = 0; sumado = true;
			f = 0;
			
			while(f < TL and sumado){
				
				if(M[f][c] == 0){
					
					sumado = false;
					suma = 0;
					
				}
				else{
					suma+= M[f][c];
				}
				
				
				f++;
			}
			
			if(suma != 0)
						sumaEncontrada = true;
			
			c++;
		}
		
		
	}
	
	
	if(!sumaEncontrada){//recorro primer Diagonal
		f = 0; sumado = true;
		
		while(f < TL && sumado){
			
			
			if(M[f][f] == 0){
				suma = 0;
				sumado = false;
			}
			else
				suma+= M[f][f];
				
				
				f++;
		}
		
		if(suma != 0) sumaEncontrada = true;
		
	}
	
	
	if(!sumaEncontrada)//recorro Diagonal Secundaria
	{
		f = 0; c = TL - 1; sumado = true;
		
		while(f < TL && sumado){
			if(M[f][c] == 0){
				suma = 0; sumado = false;
			}
			else
				suma+= M[f][c];
				
				f++; c--;
		}
		
		if(suma != 0) sumaEncontrada = true;
		
	}
	
	
	if(sumaEncontrada)
	{
		f = 0;
		
		
		
		while(f < TL){
			
			c = 0;
			
			while(c < TL){
				
			 if(c == 0 and M[f][c] == 0 and M[f][c+1] == 0 and M[f][c+2] == 0){
			 
				 if(f == 0){
					 
					M[f][c] =   suma - M[f+1][c] - M[f+2][c];
					M[f][c+1] = suma - M[f+1][c+1] - M[f+2][c+1];
					M[f][c+2] = suma - M[f+1][c+2] - M[f+2][c+2];
					
				 }
				 
				 else if(f == 1){
					 M[f][c] =   suma - M[f+1][c] - M[f-1][c];
					 M[f][c+1] = suma - M[f+1][c+1] - M[f-1][c+1];
					 M[f][c+2] = suma - M[f+1][c+2] - M[f-1][c+2];
								 
				 }
					else if(f == 2){
					 M[f][c] =   suma - M[f-1][c] - M[f-2][c];
					 M[f][c+1] = suma - M[f-1][c+1] - M[f-2][c+1];
					 M[f][c+2] = suma - M[f-1][c+2] - M[f-2][c+2];
				 }
				
					
			 }
			 else
			 {
				 
				 if(M[f][c] == 0){
					 if(c == 0){
						 M[f][c] = suma - M[f][c+1] - M[f][c+2];
					 }else if(c == 1){
						 M[f][c] = suma - M[f][c-1] - M[f][c+1];
					 }else if(c == 2){
						 M[f][c] = suma - M[f][c-1] - M[f][c-2];
					 }
				 }
				 
			 }
				
				
				
				c++;
			}
			
			
			f++;
		}
		
		
	}
	else{
		f = 0;
		
		while(f < TL){
			
			c = 0;
			
			while(c < TL){
				
				if(M[f][c] == 0){
					if(c == 0){
						M[f][c] = M[f][c+1];
					}else if(c == 1){
						M[f][c] = M[f][c-1];
					}else if(c == 2){
						M[f][c] = M[f][c-1];
					}
				}
				
				
				c++;
			}
			
			
			f++;
		}
	}
	
	
	
	
}//fin funcion


void cargarM(int M[][TAM],const int TL)
{
	for(int f = 0; f < TL; f++)
		for(int c = 0; c < TL; c++)
		cin >> M[f][c];
}

void imprimirM(const int M[][TAM],const int TL)
{
	for(int f = 0; f < TL; f++){
		for(int c = 0; c < TL; c++){
			if(c == 0)
				cout << M[f][c];
			else 
				cout << setw(2) << M[f][c];
		}
		cout << endl;
	}
}
