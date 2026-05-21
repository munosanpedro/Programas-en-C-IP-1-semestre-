//Calculadora de Compra en una Tienda
#include<stdio.h>
int main(){
	char producto[50]; 
	float precio, subtotal, iva, total; 
	int cantidad;
	printf("Producto: "); 
	scanf("%s", producto);
	 printf("Precio: ");
	  scanf("%f", &precio);
	   printf("Cantidad: ");
	    scanf("%d", &cantidad);
		 subtotal = precio * cantidad;
		  iva = subtotal * 0.16;
		   total = subtotal + iva;
		   printf("Total: %.2f", total);
	return 0;
}