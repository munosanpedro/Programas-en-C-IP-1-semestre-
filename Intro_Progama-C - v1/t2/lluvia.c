#include <stdio.h>
int main(){
int lluvia, viento;
printf("¿Llueve? (1=si,0=no): ");
scanf("%d",&lluvia);
if(lluvia==1){
printf("Lleva paraguas\n");
}else{
	printf("No lleves paraguas si no hace mucho sol, pero hace mucho viento? (1=si,0=no):\n");
	scanf("%d", &viento);
	if(viento==1){
		printf("Definitivamente no\n");
	}else{
		printf("Podrias llevarlo si te quema el solo, de nada.");
	}
}
return 0;
}