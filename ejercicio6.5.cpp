#include <iostream>

using namespace std;

int main() {
	int anio_actual = 2100;
	int anio_final = 2199;
	int contador_bisiestos = 0;
	
	for (int i = anio_actual; i <= anio_final; i++) {
		if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
			contador_bisiestos++;
			cout << i << " es un a�o bisiesto." << endl;
		}
	}
	
	cout << "Entre " << anio_actual << " y " << anio_final << ", hay " << contador_bisiestos << " a�os bisiestos." << endl;
	
	return 0;
}
