#include<stdio.h>
//selector cualquiera de calculadora
//calculadora de finazas
int main(){
	int opcion;
	float dinero, total;
	printf("Calculadora financiaera\n Que deseas calcular?\n");
	printf("1.Iva\n");
	printf("2.isr\n");
	printf("3.Total de una compra\n");
	printf("4.salir\n");
	printf("5.\n");
	printf("6.\n");
	printf("7.salir\n");
	printf("Seleciona una opcion\n");//eran 7 xd, ya
	scanf("%d", &opcion);
	switch(opcion){
		
		case 1:
				printf("Ingresa la cantidad\n");	
				scanf("%f", &dinero);
				total=dinero*.16;
				printf("El valor del IVA es: $%.2f\n", total);
		break;
			
		case 2:
				printf("Ingresa la cantidad\n");
				scanf("%f", &dinero);
				total=dinero*.30;
				printf("El valor del ISR es: $%.2f\n", total);
		break;
			
		case 3:
				printf("El valor del producto\n");
				scanf("%f", &dinero);
				total=dinero*1.16;
				printf("El total con IVA incluido es: $%.2f\n", total);
		break;
		
		case 4:
				printf("Saliendo del sistema\n");
		break;
		
		case 5:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Tios %s\n", familiar);
		break;
			
		case 6:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Familia politica %s\n", familiar);
				
		break;
			
		case 7:
			printf("Saliendo del sistema\n");	
				
		break;
		
		default:
				printf("Opcion invalida");
	
	}
	printf("Que tenga un buen dia");
	return 0;
}
