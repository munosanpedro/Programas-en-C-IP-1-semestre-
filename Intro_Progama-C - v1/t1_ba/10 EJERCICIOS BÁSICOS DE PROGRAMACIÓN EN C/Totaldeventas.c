//Total de ventas
#include<stdio.h>
int main(){
	float venta, total=0;
	int i;
		for(i=1;i<=5;i++){
			printf("Venta %d: ", i);
			scanf("%f", &venta);
			total += venta;
		}
			printf("Total ventas: %.2f", total);
	return 0;
}