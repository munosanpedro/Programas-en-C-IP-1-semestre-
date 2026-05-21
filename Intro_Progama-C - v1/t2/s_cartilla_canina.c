#include<stdio.h>
/*Verificar cartilla canina
 trae cartilla opcion 1
  dar cartlla
no trae cartilla opcion 0
 solicitar otra decha de consulta
Refuerzo anual desde un año de vida
 si dedad de perro es mayor o igual a 1 año
  toca refuerzo 
  		en caso contrario regresar despues
*/
int main(){
	int cartilla, opcion;
	float temp;
	float edad;
		printf("Bienvenido al portal de vacunacion canina\n");
		printf("1 registrar su cartilla\n");
		printf("2 refuerzo anual\n");
		printf("3 Primer vacuna\n");
		printf("4 revision de rutina\n");
		printf("5 revision de temperatura\n");
	printf("Seleccione una opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: printf("Trae su cartilla (1=Si 0=No):  ");
					scanf("%d", &cartilla);
					if(cartilla == 1){
					printf("La cartilla quedo registrada\n");
					printf("Su cartilla quedo registrada\n");
					}else{
				printf("Solicita una cita pra registrar la cartilla\n de lunes a martes\n");}
				break;
				
			case 2: printf("Bienvenido a su refuerzo anual\n Para poder vacunar a su canino nesesitamos saber su edad\n");
	 				printf("Cual es la edad de su canino en años:  ");
					scanf("%f", &edad);
					if(edad >= 1){
					printf("Toca refuerzo\n");
					printf("Vacunado vuelva en un año para la siguiente\n");
					}else{
				printf("Todavia no le toca regrese en unos meses");}
				break;	
				
			case 3: printf("Bienvenido a su primera vacuna\n Para poder vacunar a su canino nesesitamos saber su edad\n");
	 				printf("Cual es la edad de su canino en meses:  ");
					scanf("%f", &edad);
					if(edad <= 2){
					printf("Vacuna aplicada\n");
					printf("Desparacitado\n");
					}else if(edad >= 6){
					printf("ya esta grande");
					}else{
				printf("todavia no le toca vacuna");}
				break;
				
			case 4: printf("Bienvenido a la revision rutinaria\n");
					printf("Cual es la edad de su canino en meses:  ");
					scanf("%f", &edad);
					if(edad >= 6){
					printf("Peinado y recomendar mas pedigri");
					}else{
				printf("Todavia no esta en la edad");}
				break;
				
			case 5: printf("Bienvenido a la revision de temperatura\n");
					printf("Cual es la temperatura registrada:  ");
					scanf("%f", &temp);
					if(temp >= 38){
					printf("No se puede vacunar");
					}else{
				printf("Vacuna aplicada");}
				break;
			
			default:
				printf("Opcion no valida, intentelo de nuevo");
		}
	printf("\nque tenga un buen dia\n saliendo");
	
return 0;
}
