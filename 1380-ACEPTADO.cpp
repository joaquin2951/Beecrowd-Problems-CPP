#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Para std::setw y std::setfill

using namespace std;

// Calcula el período de Pisano para módulo m
int pisano_period(int m) {
	int previous = 0, current = 1;
	for (int i = 0; i < m * m; ++i) {
		int temp = (previous + current) % m;
		previous = current;
		current = temp;
		if (previous == 0 && current == 1) {
			return i + 1;
		}
	}
	return -1; // Esto nunca debe pasar
}

// Calcula el n-ésimo número de Fibonacci mod m
int fibonacci_mod(int n, int m) {
	int pisano_period_m = pisano_period(m);
	n = n % pisano_period_m;
	
	if (n == 0)
		return 0;
	
	int previous = 0, current = 1;
	for (int i = 1; i < n; ++i) {
		int temp = (previous + current) % m;
		previous = current;
		current = temp;
	}
	return current;
}

// Convierte una cadena de dígitos en un número módulo m
int string_to_mod(const string& s, int m) {
	int result = 0;
	for (char c : s) {
		result = (result * 10 + (c - '0')) % m;
	}
	return result;
}

int main() {
	const int MOD = 1000;
	const int PISANO_PERIOD = pisano_period(MOD);
	
	int T;
	cin >> T;
	
	while (T--) {
		string K_str;
		cin >> K_str;
		
		// Convertir la cadena K a un número mod el período de Pisano
		int K_mod = string_to_mod(K_str, PISANO_PERIOD);
		
		// Calcular el Fibonacci mod 1000
		int result = fibonacci_mod(K_mod, MOD);
		
		// Formatear el resultado para que tenga siempre 3 dígitos
		cout << setw(3) << setfill('0') << result << endl;
	}
	
	return 0;
}
