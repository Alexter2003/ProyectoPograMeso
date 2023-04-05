#include <stdio.h>

int main()
{
	int n;
	double numero, suma = 0.0;
	
	printf("Introduzca el numero de elementos de la serie: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		printf("Introduzca el %dº numero: ", i);
		scanf("%lf", &numero);
		suma += numero;
	}
	
	printf("La suma de la serie es: %f\n", suma);
	
	return 0;
}


