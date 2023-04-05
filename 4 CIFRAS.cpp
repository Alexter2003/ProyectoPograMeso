#include <stdio.h>

int main() {
	int num, suma_par, suma_impar, digito, i;
	for(num = 1000; num <= 9999; num++) {
		suma_par = suma_impar = 0;
		for(i = 0; i < 4; i++) {
			digito = num % 10;
			if(i % 2 == 0) {
				suma_par += digito;
			} else {
				suma_impar += digito;
			}
			num /= 10;
		}
		if(suma_par == suma_impar) {
			printf("%d\n", num * 1000 + digito * 100 + num % 10 * 10 + digito);
		}
	}
	return 0;
}
