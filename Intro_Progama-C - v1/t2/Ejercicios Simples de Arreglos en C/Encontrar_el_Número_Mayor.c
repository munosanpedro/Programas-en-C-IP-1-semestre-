//Encontrar_el_Número_Mayor
#include<stdio.h>
int main(){
	int numeros[5];
	int i, mayor;
		for(i = 0; i < 5; i++) {
			printf("Ingresa un numero: ");
			scanf("%d", &numeros[i]);
		}
			mayor = numeros[0];
				for(i = 1; i < 5; i++) {
					if(numeros[i] > mayor) {
							mayor = numeros[i];
						}	
					}
						printf("El numero mayor es: %d", mayor);
		
	return 0;
}