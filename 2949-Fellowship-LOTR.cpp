#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N;
	string name;
	char tipo;
	int cant[] = {0,0,0,0,0}; //A,E,H,M,X 
		
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> name;
		cin >> tipo;
		
		switch(tipo){
			case 'A': cant[0]++; break;
			case 'E': cant[1]++; break;
			case 'H': cant[2]++; break;
			case 'M': cant[3]++; break;
			case 'X': cant[4]++; break;
		}
		
	}
	
	cout << cant[4] << " Hobbit(s)" << endl;
	cout << cant[2] << " Humano(s)" << endl;
	cout << cant[1] << " Elfo(s)" << endl;
	cout << cant[0] << " Anao(oes)" << endl;
	cout << cant[3] << " Mago(s)" << endl;
	
	return 0;
}

