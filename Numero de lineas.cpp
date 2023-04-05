#include <stdio.h>

int main() {
	int num_lineas, i, j;
	printf("Ingrese el numero de lineas: ");
	scanf("%d", &num_lineas);
	for(i = 1; i <= num_lineas; i++) {
		for(j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


