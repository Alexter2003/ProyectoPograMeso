#include <stdio.h>

int main() {
	int c, count = 0;
	
	printf("Introduce un texto:\n");
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n' || c == '\f') {
			count++;
		}
	}
	
	printf("El n�mero de espacios en blanco es: %d\n", count);
	
	return 0;
}



