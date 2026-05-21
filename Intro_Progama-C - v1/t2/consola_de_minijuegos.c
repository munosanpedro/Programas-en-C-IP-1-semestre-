#include<stdio.h>
int main(){
	int opcion, repetir = 1, i;
	int numero_secreto = 7, intento;
	printf("°_-MC1.21.110-_°\n");
	while(repetir==1){
		printf("1.jugar\n2.contador\n3.salir\nElige una opcion:  ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
			printf("Adivina el numero:  ");
			scanf("%d", &intento);
			if(intento == numero_secreto){
				printf("Ganaste\n");
			}else if(intento < numero_secreto){
				printf("Muy bajo\n");
			}else{
				printf("Muy alto\n");
			}
			break;
			
			case 2:
			for(i = 1; i<=10; i++){
				printf("%d\n", i);
			}
			break;
			
			case 3:
			repetir = 0;
			break;
		}
	}
	
	printf("Que tengas un buen dia.");
	
	return 0;
}
