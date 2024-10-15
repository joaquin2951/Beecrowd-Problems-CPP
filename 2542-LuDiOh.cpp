#include <iostream>
using namespace std;


struct Carta{
	int atributos[100];
};

struct Mazo{
	Carta cartas[100];//enumeradas de 1 a M
	int cantCartas;
	int cantAtributos;
};


void cargarMazo(Mazo & deck);
void ganador(const Mazo & p1, const Mazo & p2, const int cartap1, const int cartap2, const int atribute);

int main(int argc, char *argv[]) {
	Mazo mazoMarcos, mazoLeonardo;

	int cantAtributos;
	
	while(cin >> cantAtributos){
	
		mazoMarcos.cantAtributos = cantAtributos;
		mazoLeonardo.cantAtributos = cantAtributos;
		
		cin >> mazoMarcos.cantCartas;
		cin >> mazoLeonardo.cantCartas;
		
		cargarMazo(mazoMarcos);
		cargarMazo(mazoLeonardo);
		
		int cartaM, cartaL, atributo;
		
		cin >> cartaM >> cartaL;// [1, M/L]
		cin >> atributo;//[1,N]
		
		ganador(mazoMarcos,mazoLeonardo,cartaM,cartaL,atributo);
		
	}
	
	
	
	
	
	return 0;
}

void ganador(const Mazo & p1, const Mazo & p2, const int cartap1, const int cartap2, const int atribute){
	
	if(p1.cartas[cartap1 - 1].atributos[atribute - 1]
		 >
		 p2.cartas[cartap2 - 1].atributos[atribute - 1])
		cout << "Marcos" << endl;
	else
		if(p1.cartas[cartap1 - 1].atributos[atribute - 1]
			 <
			 p2.cartas[cartap2 - 1].atributos[atribute - 1])
		cout << "Leonardo" << endl;
		else
			cout << "Empate" << endl;
		
}

void cargarMazo(Mazo & deck){
	
	for(int i = 0; i < deck.cantCartas; i++){//recorro las cartas
		
		for(int j = 0; j < deck.cantAtributos; j++){//recorro cada atributo
			
			cin >> deck.cartas[i].atributos[j];
			
		}
		
	}
	
}
