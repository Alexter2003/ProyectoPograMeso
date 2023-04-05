#include <iostream>


int calcularMCD(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	
	int num1, num2;
	std::cout << "Ingrese el primer número: ";
	std::cin >> num1;
	std::cout << "Ingrese el segundo número: ";
	std::cin >> num2;
	
	
	int mcd = calcularMCD(num1, num2);
	
	
	std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << std::endl;
	
	return 0;
}
