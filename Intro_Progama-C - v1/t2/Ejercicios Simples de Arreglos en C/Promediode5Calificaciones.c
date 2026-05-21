//Promediode5Calificaciones
#include<stdio.h>
int main(){
	float calif[5];
	float suma = 0, promedio;
	int i;
			for(i = 0; i < 5; i++) {
				printf("Ingresa una calificacion: ");
				scanf("%f", &calif[i]);
				suma = suma + calif[i];
			}
				promedio = suma / 5;
				printf("El promedio es: %.2f", promedio);
	return 0;
}