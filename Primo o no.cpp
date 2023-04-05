#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2; i*i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int num;
	printf("Ingrese un número: ");
	scanf("%d", &num);
	if (es_primo(num)) {
		printf("%d es un número primo.\n", num);
	} else {
		printf("%d no es un número primo.\n", num);
	}
	return 0;
}
	


