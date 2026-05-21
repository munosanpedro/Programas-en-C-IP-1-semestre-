//Promedio de estudiante
#include<stdio.h>
int main(){
	float cal1, cal2, cal3, promedio;
		printf("Ingrese tres calificaciones: ");
		scanf("%f %f %f", &cal1, &cal2, &cal3);
			promedio = (cal1 + cal2 + cal3) / 3;
				printf("Promedio: %.2f", promedio);
	return 0;
}