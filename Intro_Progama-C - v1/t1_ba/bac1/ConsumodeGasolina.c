//Consumo de Gasolina
#include<stdio.h>
int main(){
	float litros, precio, total;
	 printf("Litros: ");
	  scanf("%f",&litros);
	   printf("Precio por litro: ");
	    scanf("%f",&precio);
		 total = litros * precio;
		  printf("Total a pagar: %.2f", total);
	return 0;
}