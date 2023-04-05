#include <stdio.h>

int main() {
	float altura_inicial, tiempo, velocidad, altura;
	
	// Pedimos al usuario la altura inicial desde la que cae el objeto
	printf("Introduce la altura desde la que cae el objeto (metros): ");
	scanf("%f", &altura_inicial);
	
	// Calculamos y mostramos la velocidad y altura del objeto cada segundo
	printf("\nTiempo (segundos)\tVelocidad (m/s)\tAltura (metros)\n");
	
	for (int i = 0; i <= 10; i++) {
		tiempo = i;
		velocidad = 9.8 * tiempo;
		altura = 0.5 * 9.8 * tiempo * tiempo + altura_inicial;
		printf("%d\t\t\t%.2f\t\t%.2f\n", i, velocidad, altura);
	}
	
	return 0;
}


