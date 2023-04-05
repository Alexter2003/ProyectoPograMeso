#include <stdio.h>

int main() {
	int num, digito, suma_cubos, i;
	for(num = 100; num <= 999; num++) {
		suma_cubos = 0;
		for(i = 0; i < 3; i++) {
			digito = num % 10;
			suma_cubos += digito * digito * digito;
			num /= 10;
		}
		if(suma_cubos == num) {
			printf("%d\n", num * 100 + digito * 10 + num % 10);
		}
	}
	return 0;
}

