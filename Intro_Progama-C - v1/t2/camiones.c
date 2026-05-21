#include<stdio.h>
//con ciclo for
int main(){
	int i;
	int horaSalida, horaLlegada, minutos, chofer;
	float cajaInicial, totalCobrado, ganancia;
	char ruta[50];
	for(i=1; i<=10; i++){
	printf("\nCamion %d\n", i);
	
		printf("Ruta:  ");
		scanf("%s", &ruta);
		
		printf("Chofer:  ");
		scanf("%d", &chofer);
		
		printf("salida:  ");
		scanf("%d", &horaSalida);
		
		printf("Llegada:  ");
		scanf("%d", &horaLlegada);
		
		printf("Caja:  ");
		scanf("%f", &cajaInicial);
		
		printf("Cobrado:  ");
		scanf("%f", &totalCobrado);
		
		minutos= horaLlegada-horaSalida;
		ganancia= totalCobrado-cajaInicial;
		
		printf("Tiempo: %d minutos\n", minutos);
		printf("Ganancia: %.2f\n", ganancia);
		
	}
	return 0;
}
