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
	int cartilla;
	float edad;
	 
	/* printf("Bienvenido al portal de vacunacion canina\n Para poder asignarle una consulta primero necesita registrar su cartilla\n");
	 	printf("Trae su cartilla (1=Si 0=No):  ");
		scanf("%d", &cartilla);
		if(cartilla == 1){
			printf("La cartilla quedo registrada\n");
				printf("Su cartilla quedo registrada\n");
		}else{
			printf("Solicita una cita pra registrar la cartilla\n de lunes a martes\n");
		}
	return 0;*/
	
	/* printf("Bienvenido a su refuerzo anual\n Para poder vacunar a su canino nesesitamos saber su edad\n");
	 	printf("Cual es la edad de su canino en años:  ");
		scanf("%f", &edad);
		if(edad >= 1){
			printf("Toca refuerzo\n");
				printf("Vacunado vuelva en un año para la siguiente\n");
		}else{
			printf("Todavia no le toca regrese en unos meses");
		}
	return 0;*/
	
	printf("Bienvenido a su primera vacuna\n Para poder vacunar a su canino nesesitamos saber su edad\n");
	 	printf("Cual es la edad de su canino en meses:  ");
		scanf("%f", &edad);
		if(edad <= 2){
			printf("Vacuna aplicada\n");
				printf("Desparacitado\n");
		}else if(edad >= 6){
			printf("Peinar??");
		}else{
			printf("todavia no le toca vacuna");
		}
	return 0;
}
