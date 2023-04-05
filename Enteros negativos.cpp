#include <stdio.h>

int main() {
	int num, count = 0;
	printf("Ingrese los numeros separados por espacios: ");
	while(scanf("%d", &num) == 1) {
		if(num < 0) {
			count++;
		}
	}
	printf("Numero de enteros negativos: %d\n", count);
	return 0;
}

