#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//selector cualquiera de calculadora
int main(){
	int i, opcion, ganador, numUsuario;
	int acierto=0;
	float saldo_usuario, apuesta, retirar;
	
	srand(time(NULL));
	ganador= rand( )%101;
	
	
	printf("Bienvenido a el casino\n Que deseas hacer?\n");
	printf("1.Recargar creditos\n");
	printf("2.Apostar\n");
	printf("3.Retirar\n");
	printf("4.salir\n");
	printf("Seleciona una opcion\n");
	scanf("%d", &opcion);
	switch(opcion){
		
		case 1:
				printf("Cuanto desea recargar\n");
				scanf("%d", &saldo_usuario);
				printf("Creditos actualizados\n");
		break;
			
		case 2:
				printf("--- Bienvenido al casino del pueblo ---\n");
				printf("Instrucciones: tienes 10 intentos para adivinar el numero ganador.\n\n");
	
				printf("¿Cuanto dinero deseas apostar? $");
				scanf("%f",  &apuesta);
				if(saldo_usuario>0){
					saldo_usuario=saldo_usuario-apuesta;
				}else{
					printf("Nos debes he");
				}
		
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
			printf("Premio ganado (x5): $%.2f\n", saldo_usuario+apuesta*5);
		}else{
			printf("Mala suerte para la proxima.\n");
			printf("El numero gandor era: %d\n ", ganador);
			printf("Perdiste: $%.2f\n Lamentable, para la proxima\n", apuesta);
		}
		printf("===================================================================\n");
		break;
			
		case 3:
				printf("Ingrese la cantida de dinero que deseas retirar\n");
				scanf("%f", &retirar );
				if(saldo_usuario>0){
					printf("Tu saldo es $%f\n", saldo_usuario-retirar);
				}else{
					printf("Tu saldo es $%f\n", saldo_usuario);
				}
				
				
		break;
		
		case 4:
			printf("Saliendo del sistema");	
		break;
		
		default:
			printf("Opcion invalida");
	
	}
	printf("Que tenga un buen dia");
	return 0;
}
