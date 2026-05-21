#include<stdio.h>
int main(){
	//si el bebe tiene 0 meses, le corresponde vacuna
	int edad_meses, cartilla;
	float temp;
	/*printf("Ingresa la edad del menor en meses:  ");
	scanf("%d", &edad_meses);
	
	if(edad_meses==0){
		printf("Aplicar vacuna al nacer\n");
		}else{
			printf("No corresponde esta vacuna\n");
		}
	
	return 0;*/
	
	
	//vacuna de 2 meses
	/*printf("Ingresa la edad del menor en meses:  ");
	scanf("%d", &edad_meses);
	
	if(edad_meses==2){
		printf("Le corresponde  vacuna de 2 meses\n");
		}else{
			printf("Aun no corresponde esta vacuna\n");
		}
	return 0;*/
	
	//Revisar fiebre
	/*printf("Ingresa la temperatura registrada:  ");
	scanf("%f", &temp);
	
	if(temp<37.5){
		printf("Puede vacunarse\n");
		}else{
			printf("No aplica, tiene fiebre\n");
	}
	
	return 0;*/
	
	//validar cartilla
	/*printf("Trae cartilla? (1=Si. 0=No):  ");
	scanf("%d", &cartilla);
	
	if(cartilla == 1){
		printf("Registrar vacuna en cartilla\n");
	}else{
		printf("No se puede registrar\n");
	}
	return 0;*/
	
	// refuerzo 6 meses
	printf("Ingresa la edad del menor en meses:  ");
	scanf("%d", &edad_meses);
	
	if(edad_meses==6){
		printf("Aplicar vacuna de refuerzo\n");
		}else{
			printf("No corresponde refuerzo\n");
		}
	
	return 0;
}
