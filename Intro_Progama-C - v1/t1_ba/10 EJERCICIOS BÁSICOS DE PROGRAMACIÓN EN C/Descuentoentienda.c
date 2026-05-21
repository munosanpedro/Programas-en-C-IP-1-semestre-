//Descuento en tienda
#include<stdio.h>
int main(){
	float total, descuento=0, totalFinal;
		printf("Total de compra: ");
		scanf("%f", &total);
			if(total > 1000)
				descuento = total * 0.10;
				totalFinal = total - descuento;
				printf("Total final: %.2f", totalFinal);	
	return 0;
}