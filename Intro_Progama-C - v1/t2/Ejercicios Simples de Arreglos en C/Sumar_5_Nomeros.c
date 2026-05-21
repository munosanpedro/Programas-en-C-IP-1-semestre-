//Sumar_5_Nomeros
#include<stdio.h>
int main(){
	int numeros[5];
	int i, suma = 0;
		for(i = 0; i < 5; i++) {
			printf("Ingresa un numero: ");
			scanf("%d", &numeros[i]);
			suma = suma + numeros[i];
		}
			printf("La suma total es: %d", suma);	
	return 0;
}