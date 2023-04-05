#include <iostream>

using namespace std;

int main() {
	int n;
	int suma = 0;
	int objetivo;
	
	
	cout << ("Ingrese el objetivo de la suma: ");
	cin >> objetivo;
	
	
	for (n = 1; suma <= objetivo; ++n) {
		suma += n;
	}
	
	
	cout << ("El número natural N más pequeño tal que la suma de los n primeros números exceda de ")<< objetivo << " es: " << n - 1 << std::endl;
	
	return 0;
}

