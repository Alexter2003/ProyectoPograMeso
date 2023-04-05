#include <stdio.h>

#define CM_TO_INCH 0.3937
#define LB_TO_KG 0.4536

int main() {
	float longitud_cm, masa_lb;
	float longitud_inch, masa_kg;
	
	while (1) {
		printf("Introduce la longitud en centimetros (valor negativo para salir): ");
		scanf("%f", &longitud_cm);
		
		if (longitud_cm < 0) {
			break;
		}
		
		longitud_inch = longitud_cm * CM_TO_INCH;
		printf("La longitud es: %.2f pulgadas\n", longitud_inch);
		
		printf("Introduce la masa en libras (valor negativo para salir): ");
		scanf("%f", &masa_lb);
		
		if (masa_lb < 0) {
			break;
		}
		
		masa_kg = masa_lb * LB_TO_KG;
		printf("La masa es: %.2f kilogramos\n", masa_kg);
	}
	
	return 0;
}


