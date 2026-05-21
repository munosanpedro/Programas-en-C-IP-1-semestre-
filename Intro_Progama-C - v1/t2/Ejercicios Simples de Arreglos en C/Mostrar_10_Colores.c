//Mostrar_10_Colores
#include<stdio.h>
int main(){
	char colores[10][20];
	int i;
		for(i = 0; i < 10; i++) {
			printf("Ingresa un color: ");
			scanf("%s", colores[i]);
		}
			printf("\nColores guardados:\n");
				for(i = 0; i < 10; i++) {
					printf("%s\n", colores[i]);
			}	
	return 0;
}