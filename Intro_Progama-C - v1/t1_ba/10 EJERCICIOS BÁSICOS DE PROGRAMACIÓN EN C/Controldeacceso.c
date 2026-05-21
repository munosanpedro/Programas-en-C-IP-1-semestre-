//Control de acceso
#include<stdio.h>
int main(){
	int edad;
		printf("Edad: ");
		scanf("%d", &edad);
			if(edad>=18)
				printf("Acceso permitido");
			else
				printf("Acceso denegado");
	return 0;
}