//Promedio de Calificaciones
#include<stdio.h>
int main(){
	float c1,c2,c3,prom;
	printf("Calificacion 1: ");
		scanf("%f",&c1);
			printf("Calificacion 2: ");
			scanf("%f",&c2);
			printf("Calificacion 3: ");
			scanf("%f",&c3);
				prom = (c1+c2+c3)/3;
				printf("Promedio: %.2f", prom);
	return 0;
}