#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int num_decimales;
	cout << "Ingrese la cantidad de decimales de pi que desea mostrar: ";
	cin >> num_decimales;
	
	double pi = 0;
	int signo = 1;
	long long denominador = 1;
	while (true) {
		double termino = signo * 1.0 / denominador;
		pi += 4 * termino;
		if (abs(4 * termino) < pow(10, -num_decimales)) {
			break;
		}
		signo = -signo;
		denominador += 2;
	}
	
	cout << fixed << setprecision(num_decimales);
	cout << "El valor de pi con " << num_decimales << " decimales es: " << pi << endl;
	
	return 0;
}

