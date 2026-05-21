//Cálculo del Salario Semanal
#include<stdio.h>
int main(){
	int horas;
	float pagoHora, salario;
		printf("Horas trabajadas: ");
			scanf("%d",&horas);
			printf("Pago por hora: ");
			scanf("%f",&pagoHora);
				salario = horas * pagoHora;
				printf("Salario semanal: %.2f", salario);
	return 0;
}