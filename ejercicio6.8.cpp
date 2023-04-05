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
	// Cálculo de parejas de conejos en un año
	int parejasEnUnAnio = calcularParejasDeConejos(12);
	std::cout << "El número de parejas de conejos en un año es: " << parejasEnUnAnio << std::endl;
	
	// Cálculo de tiempo para alcanzar una cantidad específica de conejos
	int cantidadObjetivo;
	std::cout << "Ingrese la cantidad de conejos objetivo: ";
	std::cin >> cantidadObjetivo;
	
	int mesesParaCantidadObjetivo = calcularTiempoParaCantidadDeConejos(cantidadObjetivo);
	std::cout << "El tiempo necesario para alcanzar " << cantidadObjetivo << " conejos es: " << mesesParaCantidadObjetivo << " meses." << std::endl;
	
	return 0;
}
