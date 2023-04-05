#include <iostream>

using namespace std;

int main() {
	int num, fact = 1;
	
	// Bucle con for
	cout << "Ingrese un numero: ";
	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	
	cout << "El factorial de " << num << " es: " << fact << endl;
	
	// Bucle con while
	
	fact = 1;
	int i = 1;
	
	while (i <= num) {
		fact *= i;
		i++;
	}
	
	cout << "El factorial de " << num << " es: " << fact << endl;
	
	// Bucle con do-while

	fact = 1;
	i = 1;
	
	do {
		fact *= i;
		i++;
	} while (i <= num);
	
	cout << "El factorial de " << num << " es: " << fact << endl;
	
	return 0;
}
