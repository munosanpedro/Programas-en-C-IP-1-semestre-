//Salario semanal
#include<stdio.h>
int main(){
	float horas, pago, salario;
		printf("Horas y pago por hora: ");
			scanf("%f %f", &horas, &pago);
				salario = horas * pago;
					printf("Salario: %.2f", salario);	
	return 0;
}