#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//ana,marta,jose,maria,ines,Juana;
	
	int vec[] = {300,1500,600,1000,150,225};
	
	
	int cantPorciones;
	
	for(int i = 0; i < 5; i++){
		cin >> cantPorciones;
		vec[i] = vec[i] * cantPorciones;
	}
	
	
	for(int j = 0; j < 5; j++){

		vec[5] = vec[5] + vec[j];
		
	}
	
	cout << vec[5] << endl;
	
	return 0;
}

