#include <iostream>
using namespace std;

int main() {
	int n;
	float num, max_num = -1e9; // Inicializar max_num con un valor muy peque�o
	
	cout << "Ingrese la cantidad de n�meros: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cout << "Ingrese el n�mero " << i << ": ";
		cin >> num;
		
		if (num > max_num) {
			max_num = num;
		}
	}
	
	cout << "El n�mero mayor es " << max_num << endl;
	
	return 0;
}
