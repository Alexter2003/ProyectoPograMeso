#include <stdio.h>

int main() {
	int i, j;
	printf("Codigos ASCII de las letras mayusculas:\n");
	for(i = 65; i <= 90; i++) {
		printf("%c: %d\n", i, i);
	}
	printf("Codigos ASCII de las letras minusculas:\n");
	for(j = 97; j <= 122; j++) {
		printf("%c: %d\n", j, j);
	}
	return 0;
}


