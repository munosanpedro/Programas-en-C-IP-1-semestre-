//Conversión de Pesos a Dólares
#include<stdio.h>
int main(){
	float pesos, tipo, dolares;
	 printf("Pesos: ");
	  scanf("%f",&pesos);
	   printf("Tipo de cambio: ");
	    scanf("%f",&tipo);
		 dolares = pesos / tipo;
		  printf("Dolares: %.2f", dolares);
	return 0;
}