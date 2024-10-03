#include <iostream>
using namespace std;

float PI = 3.1415;
	
int main() {
	
	//Sabiendo el radio del modelo de globo y la cantidad de helio disponible 
	//¿Podrías ayudar al equipo, determinando cuántos globos pueden llenarse completamente?
	
	//el volumen de una esfera es: (4/3) * pi * (radio^3)
	
	int Radio , Litros;  //(1 <= R, L <= 10^9) 
	
	cin>>Radio>>Litros;
	//cantidad de globos que se pueden llenar con Helio:  LitrosDeHelio / VolumenDeGlobo
	
	
	cout<< (int)(Litros / ((4.0/3.0) * PI * (Radio*Radio*Radio) ))<<endl;
	
	//(con (int) estoy "transformando" todo el resultado en entero para que no me muestre decimales despues de la coma.
	
	return 0;
}

