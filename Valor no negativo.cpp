#include <stdio.h>

int main() {
	int n, i, j;
	
	printf("Introduce un n�mero no negativo: ");
	scanf("%d", &n);
	
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}

