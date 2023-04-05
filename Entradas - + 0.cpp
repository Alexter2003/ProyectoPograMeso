#include <stdio.h>

int main() {
	int n, i, positivos = 0, negativos = 0, cero = 0;
	
	printf("Introduce el número de entradas: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		int entrada;
		printf("Introduce la entrada %d: ", i+1);
		scanf("%d", &entrada);
		if (entrada > 0) {
			positivos++;
		} else if (entrada < 0) {
			negativos++;
		} else {
			cero++;
		}
	}
	
	printf("Número de entradas positivas: %d\n", positivos);
	printf("Número de entradas negativas: %d\n", negativos);
	printf("Número de entradas cero: %d\n", cero);
	
	return 0;
}

