#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N,X,Y;
	
	cin >> N >> X >> Y;
	
	float resultado =  ( (float) N / (X+Y) );
	
	cout << fixed << setprecision(2) << resultado << endl;
	
	return 0;
}

