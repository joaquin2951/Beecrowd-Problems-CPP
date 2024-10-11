#include <iostream>
using namespace std;

void recitarRunas(const int v[], int & total);

int main(int argc, char *argv[]) {
	int numRunas , AmistadNecesaria;
	int runas[25] = {0};
	
	char runa;
	int poder;
	
	cin >> numRunas >> AmistadNecesaria;
	
	
	for(int i = 0; i < numRunas; i++){
		
			cin >> runa; 
			cin >> poder;
			
			
			runas[runa - 'A'] = poder;
			
		
	}
	
	int total = 0;
	recitarRunas(&runas[0], total);
	
	cout << total << endl;
	
	if(total >= AmistadNecesaria)
		cout << "You shall pass!" << endl;
	else
		cout << "My precioooous" << endl;
	
	
	return 0;
}

void recitarRunas(const int v[], int & total){
	 char runa;
	 int cantRunas;
	 
	 cin >> cantRunas;
	 for(int i = 0; i < cantRunas; i++){
		 cin >> runa;
		 total = total + v[runa - 'A'];
	 }
	 

}
