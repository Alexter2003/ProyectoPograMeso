#include <iostream>

int main()
{
	int n = 50;
	int suma = 0;
	
	for (int i = 1; i <= n; i++)
	{
		suma += i;
	}
	printf("La suma de los primeros %d numeros enteros es: %d\n", n, suma);
	
	return 0;
}

