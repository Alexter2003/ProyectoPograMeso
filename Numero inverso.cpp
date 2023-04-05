#include <stdio.h>

int main() {
	int numero, digito , reversed_number = 0;
	
	printf("Ingrese un número entero positivo: ");
	scanf("%d", &numero);
	
	while (numero != 0) {
		digito = numero % 10;
		reversed_number = reversed_number * 10 + digito;
		numero /= 10;
	}
	
	printf("El número invertido es: %d\n", reversed_number);
	
	return 0;
}


