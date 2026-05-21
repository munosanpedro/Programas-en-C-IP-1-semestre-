#include<stdio.h>
// arbol genealogico
//abuelos padres  hijos hermanos tios familia politica amigos salir
//ingresar te da Abuela_nombre
int main(){
	int opcion;
	char familiar[50];
	printf("Arbol genealogico\n");
	printf("1.abuelos\n");
	printf("2.padres\n");
	printf("3.hijos\n");
	printf("4.hermanos\n");
	printf("5.tios\n");
	printf("6.familia politica\n");
	printf("7.amigos\n");
	printf("8.salir\n");
	scanf("%d", &opcion);
	switch(opcion){
		
		case 1:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Abuelos %s\n", familiar);
		break;
			
		case 2:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Padres %s\n", familiar);
		break;
			
		case 3:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Hijos %s\n", familiar);
		break;
		
		case 4:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Hermanos %s\n", familiar);
		
		case 5:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Tios %s\n", familiar);
		break;
			
		case 6:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Familia politica %s\n", familiar);
				
		break;
			
		case 7:
				printf("Ingresa el nombre del familiar\n");	
				scanf("%s", familiar);
				printf("Amigo %s\n", familiar);
				
		break;
		
		case 8:
				printf("Saliendo del sistema\n");
		break;
		
		default:
				printf("Opcion invalida");
	
	}
	printf("Que tenga un buen dia");
	
	return 0;
}
