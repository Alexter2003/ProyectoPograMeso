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
	
	
	cout << ("El n�mero natural N m�s peque�o tal que la suma de los n primeros n�meros exceda de ")<< objetivo << " es: " << n - 1 << std::endl;
	
	return 0;
}

