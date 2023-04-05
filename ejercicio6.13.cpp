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
	int limite = 0;
	int contador = 0;
	cout << ("Digite el limite de hasta donde quiere buscar: ");
	cin >> limite;
	while (num != limite) {
		if (esNumeroPerfecto(num)) {
			cout << num << endl;
			contador++;
		}
		num++;
	}
	return 0;
}


