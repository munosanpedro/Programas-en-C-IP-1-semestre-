//Guardar_5_Nombres
#include<stdio.h>
int main(){
	char nombres[5][20];
	int i;
		for(i = 0; i < 5; i++) {
			printf("Ingresa un nombre: ");
			scanf("%s", nombres[i]);
		}
			printf("\nLista de nombres:\n");
				for(i = 0; i < 5; i++) {
					printf("%s\n", nombres[i]);
				}	
	return 0;
}