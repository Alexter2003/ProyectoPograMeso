#include <stdio.h>

int main()
{
	double epsilon = 1e-6;
	int N = 1;
	
	double termino;
	double suma = 0.0;
	
	do {
		termino = 1.0 / N;
		suma += termino;
		N++;
	} while (termino > epsilon);
	
	printf("La suma de la serie es: %f\n", suma);
	
	return 0;
}



