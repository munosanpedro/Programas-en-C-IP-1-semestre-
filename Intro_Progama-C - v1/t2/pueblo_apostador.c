#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//la historia del pueblo apostadores
int main(){
	int numUsuario, ganador, i;
	int acierto=0;
	float apuesta;
	
	srand(time(NULL));
	ganador= rand( )%101;
	printf("--- Casino ---\n");
	printf("--- Bienvenido al casino del pueblo ---\n");
	printf("Instrucciones: tienes 10 intentos para adivinar el numero ganador.\n\n");
	
	printf("¿Cuanto dinero deseas apostar? $");
	scanf("%f",  &apuesta);
		
		for(i=1; i<=10; i++){
			printf("intento #%d - ingresa tu numero: ", i);
			scanf("%d", &numUsuario);
				if(numUsuario == ganador){
					acierto=1;
				}
		}
		printf("===================================================================\n");
		if(acierto==1){
			printf("!Enhorabuena¡ uno de tus numeros fue el ganador.\n");
			printf("El numero gandor era: %d\n ", ganador);
			printf("Premio ganado (x5): $%.2f\n", apuesta*5);
		}else{
			printf("Mala suerte para la proxima.\n");
			printf("El numero gandor era: %d\n ", ganador);
			printf("Perdiste: $%.2f\n Lamentable, para la proxima\n", apuesta);
		}
		printf("===================================================================\n");
	return 0;
}
