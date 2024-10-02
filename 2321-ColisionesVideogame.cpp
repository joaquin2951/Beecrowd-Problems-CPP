#include <iostream>
using namespace std;

int main() {
	//En este problema, los objetos son aproximados por rectángulos en un plano 2D.
	//Escriba un programa que, dado dos rectángulos, determine si se interceptan o no.
	
	int x0,y0,x1,y1 , x00, y00, x10, y10;
	bool colision;
	
	cin >> x0 >> y0 >> x1 >> y1 ;
	cin >> x00 >> y00 >> x10 >> y10 ;
	
	//colision = (y00 <= y1 and x00 <= x1) or (y0 <= y10 and x0 <= x10);
	
	colision = !(( max(x00,x0) > min(x10,x1) ) or (  max(y00,y0)  > min(y10,y1) ));
	
	
	cout << colision << endl;
	
	
	return 0;
}

