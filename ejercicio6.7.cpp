#include <iostream>

double calcularExponencial(double x) {
	double resultado = 1.0; 
	double termino = 1.0;
	for (int i = 1; i <= 10; i++) { 
		termino *= x / i; 
		resultado += termino;
	}
	
	return resultado;
}

int main() {
	double x;
	std::cout << "Ingrese el valor de x: ";
	std::cin >> x;
	
	double resultado = calcularExponencial(x);
	
	std::cout << "El valor de e^" << x << " es: " << resultado << std::endl;
	
	return 0;
}
