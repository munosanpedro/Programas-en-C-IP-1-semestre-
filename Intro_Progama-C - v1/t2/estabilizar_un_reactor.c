//reactor, estabilizar en ractor
#include<stdio.h>
int main(){
int i, opcion, estabilidad=0, temp;
for(i=1; i<=3; i++){
printf("Introduce la temperatura del reactor:  ");
scanf("%d", &temp);	
}
if(temp >=  100 || temp == 0){
 if(temp == 0){
 printf("reactor apagado.Reactivando reactor\n");
 }
printf("Sobrecalientamiento \n");
printf("Selecione una accion de estabilizacion\n");
 printf("1.inyectar  nitrogeno para enfriar(protocolo alfa)\n");
 printf("2.abrir valvulas de escape(protocolo beta)\n");
 scanf("%d", &opcion);
 switch(opcion){
 	
case 1:
	printf("Accion nitrogeno inyectado. Estabilidad incrementada al 50%\n");
	estabilidad +=50;
break; 	
 	
case 2:
	printf("Accion abrir valvulas de escape. Estabilidad incrementada al 50%\n");
	estabilidad +=30;
break;  	
 	
 	
default:
 printf("El sistema a entrado en suspencion\n");	
 	

 }
}
	
printf("Reactor en optimaz condiciones");	
	
	
 
 return 0;
}
