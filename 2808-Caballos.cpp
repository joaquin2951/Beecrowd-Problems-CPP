#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char colInit, colFin;
	int filaInit, filaFin;
	
	bool sePuedeMover = false;
	
	cin >> colInit >> filaInit;
	cin >> colFin >> filaFin;

	//Se mueve para la derecha
	if(colInit < colFin){
		
		if(colInit == colFin - 1)
			if(filaInit == filaFin + 2 or filaInit == filaFin - 2) 
				sePuedeMover = true;
		 
		if(colInit == colFin - 2)
			if(filaInit == filaFin + 1 or filaInit == filaFin - 1)
			sePuedeMover = true;
		
	}
	//Se mueve a la izquierda
	else if(colInit > colFin){
		
		if(colInit == colFin + 1)
			if(filaInit == filaFin + 2 or filaInit == filaFin - 2) 
			sePuedeMover = true;
		
		if(colInit == colFin + 2)
			if(filaInit == filaFin + 1 or filaInit == filaFin - 1)
			sePuedeMover = true;
		
	}
	
	
	if(sePuedeMover)
					cout << "VALIDO" << endl;
	else
		cout << "INVALIDO" << endl;
	
	
	return 0;
}

