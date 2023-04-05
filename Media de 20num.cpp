#include <stdio.h>

int main (void) {
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16,num17,num18,num19,num20;
	
	 do{
		 printf("ingresar la primera nota ( valores validos de 0 a 100" );
		 scanf("%d", &num1);
	 } while((num1 < 0)|| (num1 > 100));
	 do{
		 printf("ingresar la nota 2 (valores validos de 0 a 100");
		 scanf("%d", &num2);
	 } while((num2 < 0)|| (num2 > 100));
	 do{
		 printf("ingresar la nota 3 (valores validos de 0 a 100");
		 scanf("%d", &num3);
	 } while((num3 < 0)|| (num3 > 100));
	 do{
		 printf("ingresar la nota 4 (valores validos de 0 a 100");
		 scanf("%d", &num4);
	 } while((num4 < 0)|| (num4 > 100));
	 do{
		 printf("ingresar la nota 5 (valores validos de 0 a 100");
		 scanf("%d", &num5);
	 } while((num5 < 0)|| (num5 > 100));
	 do{
		 printf("ingresar la nota 6 (valores validos de 0 a 100");
		 scanf("%d", &num6);
	 } while((num6 < 0)|| (num6 > 100));
	 do{
		 printf("ingresar la nota 7 (valores validos de 0 a 100");
		 scanf("%d", &num7);
	 } while((num7 < 0)|| (num7 > 100));
	 do{
		 printf("ingresar la nota 8 (valores validos de 0 a 100");
		 scanf("%d", &num8);
	 } while((num8 < 0)|| (num8 > 100));
	 do{
		 printf("ingresar la nota 9(valores validos de 0 a 100");
		 scanf("%d", &num9);
	 } while((num9 < 0)|| (num9 > 100));
	 do{
		 printf("ingresar la nota 10 (valores validos de 0 a 100");
		 scanf("%d", &num10);
	 } while((num10 < 0)|| (num10 > 100));
	 do{
		 printf("ingresar la nota 11 (valores validos de 0 a 100");
		 scanf("%d", &num11);
	 } while((num11 < 0)|| (num11 > 100));
	 do{
		 printf("ingresar la nota 12 (valores validos de 0 a 100");
		 scanf("%d", &num12);
	 } while((num12 < 0)|| (num12 > 100));
	 do{
		 printf("ingresar la nota 13 (valores validos de 0 a 100");
		 scanf("%d", &num13);
	 } while((num13 < 0)|| (num13 > 100));
	 do{
		 printf("ingresar la nota 14 (valores validos de 0 a 100");
		 scanf("%d", &num14);
	 } while((num14 < 0)|| (num14 > 100));
	 do{
		 printf("ingresar la nota 15 (valores validos de 0 a 100");
		 scanf("%d", &num15);
	 } while((num15 < 0)|| (num15 > 100));
	 do{
		 printf("ingresar la nota 16 (valores validos de 0 a 100");
		 scanf("%d", &num16);
	 } while((num16 < 0)|| (num16 > 100));
	 do{
		 printf("ingresar la nota 17 (valores validos de 0 a 100");
		 scanf("%d", &num17);
	 } while((num17 < 0)|| (num17 > 100));
	 do{
		 printf("ingresar la nota 18 (valores validos de 0 a 100");
		 scanf("%d", &num18);
	 } while((num18 < 0)|| (num18 > 100));
	 do{
		 printf("ingresar la nota 19 (valores validos de 0 a 100");
		 scanf("%d", &num19);
	 } while((num19 < 0)|| (num19 > 100));
	 do{
		 printf("ingresar la nota 20 (valores validos de 0 a 100");
		 scanf("%d", &num20);
	 } while((num20 < 0)|| (num20 > 100));
	 
	 int media = (num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11+num12+num13+num14+num15+num16+num17+num18+num19+num20)/20;
	
	printf("\nLa media es  %d\n", media);
	return 0;
}

