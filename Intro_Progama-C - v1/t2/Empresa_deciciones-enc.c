#include<stdio.h>
int main(){
	int entregas, puntual;
	float bono=0;
	char nombre[50];
	printf("\n<:RH\n Formulario bonos\n-->Ingresa el nombre del empleado: \n");
	scanf("%s", nombre);
	
	printf("-->Numero de entregas:  ");
	scanf("%d", &entregas);
	
	printf("-->Llego puntual? (1=Si, 0=No):  ");
	scanf("%d", &puntual);
	
	if(puntual==1){
		if(entregas>=21 && entregas<=30){
			bono=1000;
		}else if(entregas>30){
			bono= 1000+500;
		}
	}
	
	printf("\n-Empleado: %s", nombre);
	printf("\n-Bono asignado: $%.2f\n", bono);
	if(bono==0){
		printf("-Echale mas ganas xd");
	}
	return 0;
}
