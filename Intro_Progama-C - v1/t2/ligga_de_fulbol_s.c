#include<stdio.h>
// ejer 3 logas de futbol 
// liga mx, la liga, mls, premier, alemana, holanda , salir
// 10 equipos de cada liga
int main(){
int opcion;
	float dinero, total;
	printf("Ligas de futbol\n");
	printf("1.liga mx\n");
	printf("2.La liga\n");
	printf("3.Mls\n");
	printf("4.premier\n");
	printf("5.alemana\n");
	printf("6.holanda\n");
	printf("7.salir\n");
	scanf("%d", &opcion);
	switch(opcion){
		
		case 1:
				printf("Club América\n");	
				printf("Chivas Guadalajara\n");	
				printf("Cruz Azul\n");	
				printf("Pumas UNAM\n");	
				printf("Tigres UANL\n");	
				printf("Monterrey\n");	
				printf("Santos Laguna\n");	
				printf("Club León\n");	
				printf("Atlas FC\n");
				
		break;
			
		case 2:
				printf("Real Madrid\n");	
				printf("FC Barcelona\n");	
				printf("Sevilla FC\n");	
				printf("Valencia CF\n");	
				printf("Real Betis\n");	
				printf("Villarreal CF\n");	
				printf("Real Sociedad\n");	
				printf("Athletic Club\n");	
				printf("Celta de Vigo\n");	
				
		break;
			
		case 3:
				printf("LA Galaxy\n");	
				printf("Los Angeles FC\n");	
				printf("Inter Miami CF\n");	
				printf("New York City FC\n");	
				printf("Seattle Sounders FC\n");	
				printf("Atlanta United FC\n");	
				printf("Portland Timbers\n");	
				printf("Chicago Fire FC\n");	
				
		break;
		
		case 4:
				printf("Manchester United\n");	
				printf("Manchester City\n");	
				printf("Liverpool FC\n");	
				printf("Chelsea FC\n");	
				printf("Arsenal FC\n");	
				printf("Tottenham Hotspur\n");	
				printf("Newcastle United\n");	
				printf("Aston Villa\n");	
		break;
		
		case 5:
				printf("Bayern Munich\n Borussia\n Dortmund RB\n Leipzig Bayer\n Leverkusen\n Borussia\n Mönchengladbach\n Eintracht\n Frankfurt VfL\n Wolfsburg SC\n Freiburg TSG\n Hoffenheim Hertha BSC\n");		
		break;
			
		case 6:
				printf("Ajax PSV\n");	
				printf("Eindhoven\n");	
				printf("Feyenoord AZ\n");	
				printf("Alkmaar FC\n");	
				printf("Utrecht Vitesse\n");	
				printf("Arnhem FC\n");	
				printf("Twente Sparta\n");	
				printf("Rotterdam SC\n");	
				printf("Heerenveen PEC Zwolle\n");	
				
		break;
			
		case 7:
				printf("Saliendo del sistema\n");	
		break;
		
		default:
				printf("Opcion invalida");
	
	}
	printf("Que tenga un buen dia");	
	
	return 0;
}
