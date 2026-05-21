//Guardar_5_Edades
#include<stdio.h>
int main(){
	int edades[5];
	int i;
		for(i = 0; i < 5; i++) {
			printf("Ingresa una edad: ");
			scanf("%d", &edades[i]);
		}
			printf("\nEdades registradas:\n");
				for(i = 0; i < 5; i++) {
					printf("%d\n", edades[i]);
				}	
	return 0;
}