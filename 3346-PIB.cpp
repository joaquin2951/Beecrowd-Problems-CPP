#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//declaro las variables de fluctuaciones
	double F1,F2;
	
	//ingreso las fluctuaciones F1 para el primer año y F2 para el segundo
	cin >> F1 >> F2;
	
	
	//le sumamos uno a los porcentajes decimales, multiplicamos los valores entre si  y al resultado de las multiplicaciones le restamos 1, 
	//luego , multiplico todo por 100 
	cout << fixed << setprecision(6) <<  ( ( (1.0 + F1/100.00) * (1.0 + F2/100.00)) - 1.0) * 100.0<<endl;
	
	
	
	return 0;
}

/* 
   aca dejo una guia para entender de dónde pude interpretar la formula: https://informederendimentos.com/consulta/como-calcular-porcentagem-acumulada/   
   estaría bueno para una clase , me pareció díficil la verdad hasta que di con la explicación de esa página 
*/
