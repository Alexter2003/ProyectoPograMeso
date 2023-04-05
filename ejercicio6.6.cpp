#include <iostream>
using namespace std;

bool esNumeroPerfecto(int num) {
	int sumaDivisores = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sumaDivisores += i;
		}
	}
	return sumaDivisores == num;
}

int main() {
	int num = 1;
	int contador = 0;
	cout << "Los primeros 3 numeros perfectos son: " << endl;
	while (contador < 3) {
		if (esNumeroPerfecto(num)) {
			cout << num << endl;
			contador++;
		}
		num++;
	}
	return 0;
}
