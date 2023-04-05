#include <iostream>

int calcularParejasDeConejos(int meses) {
	int parejasAnteriores = 0;
	int parejasActuales = 1;
	int parejasNuevas = 0;
	
	for (int i = 1; i <= meses; i++) {
		parejasNuevas = parejasAnteriores + parejasActuales;
		parejasAnteriores = parejasActuales;
		parejasActuales = parejasNuevas;
	}
	
	return parejasActuales;
}

int calcularTiempoParaCantidadDeConejos(int cantidadObjetivo) {
	int parejasAnteriores = 0;
	int parejasActuales = 1;
	int parejasNuevas = 0;
	int meses = 0;
	
	while (parejasActuales < cantidadObjetivo) {
		parejasNuevas = parejasAnteriores + parejasActuales;
		parejasAnteriores = parejasActuales;
		parejasActuales = parejasNuevas;
		meses++;
	}
	
	return meses;
}

int main() {
	// C�lculo de parejas de conejos en un a�o
	int parejasEnUnAnio = calcularParejasDeConejos(12);
	std::cout << "El n�mero de parejas de conejos en un a�o es: " << parejasEnUnAnio << std::endl;
	
	// C�lculo de tiempo para alcanzar una cantidad espec�fica de conejos
	int cantidadObjetivo;
	std::cout << "Ingrese la cantidad de conejos objetivo: ";
	std::cin >> cantidadObjetivo;
	
	int mesesParaCantidadObjetivo = calcularTiempoParaCantidadDeConejos(cantidadObjetivo);
	std::cout << "El tiempo necesario para alcanzar " << cantidadObjetivo << " conejos es: " << mesesParaCantidadObjetivo << " meses." << std::endl;
	
	return 0;
}
