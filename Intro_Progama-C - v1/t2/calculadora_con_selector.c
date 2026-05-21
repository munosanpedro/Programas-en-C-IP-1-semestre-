#include<stdio.h>
//selector cualquiera de calculadora
int main(){
	int opcion;
	float saldo_usuario;
	printf("Calculadora financiaera\n Que deseas calcular?");
	printf("1.Ver saldo\n");
	printf("2.Depositar saldo\n");
	printf("3.Retirar saldo\n");
	printf("4.salir\n");
	printf("Seleciona una opcion\n");
	scanf("%d", &opcion);
	switch(opcion){
		
		case 1:
				printf("Tu saldo es de $5\n");	
		break;
			
		case 2:
				printf("has depositado dinero\n");
		break;
			
		case 3:
				printf("has retirado dinero\n");
		break;
		
		case 4:
				printf("Tu saldo es de $5\n");
		break;
		
		default:
				printf("Opcion invalida");
	
	}
	printf("Que tenga un buen dia");
	return 0;
}
