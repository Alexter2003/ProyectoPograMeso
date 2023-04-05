#include <iostream>

using namespace std;

int main() {
	int n;
	double num, max;
	
	cout << "Ingrese la cantidad de numeros a comparar: ";
	cin >> n;
	
	cout << "Ingrese el primer numero: ";
	cin >> num;
	max = num;
	
	for (int i = 1; i < n; i++) {
		cout << "Ingrese otro numero: ";
		cin >> num;
		if (num > max) {
			max = num;
		}
	}
	
	cout << "El numero mayor es: " << max << endl;
	
	return 0;
}
