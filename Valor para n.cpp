#include <stdio.h>
#include <math.h>

double sum(int n) {
	return (1.0/3.0) * (1.0 - pow(-1, n) * pow(2, -n+1));
}

int main() {
	int n;
	printf("Ingrese el valor de n: ");
	scanf("%d", &n);
	printf("La suma de los terminos de la serie hasta n=%d es: %.4f\n", n, sum(n));
	return 0;
}


