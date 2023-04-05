#include <iostream>
#include <cmath>
using namespace std;

void primeFactors(int n) {
	
	while (n % 2 == 0) {
		cout << 2 << " ";
		n = n / 2;
	}
	
	for (int i = 3; i <= sqrt(n); i = i + 2) {
		
		while (n % i == 0) {
			cout << i << " ";
			n = n / i;
		}
	}
	
	if (n > 2)
		cout << n << " ";
}

int main() {
	int n;
	
	do{
	cout << "Ingresa un número entero positivo entre 1900 y 2000: ";
	cin >> n;
	}while(n<1900 || n>2000);
	cout << "La descomposición factorial de " << n << " es: ";
	primeFactors(n);
	return 0;
}

