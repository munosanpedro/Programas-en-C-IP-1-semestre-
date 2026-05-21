//Número mayor
#include<stdio.h>
int main(){
	int a,b,c,mayor;
	printf("Ingrese tres numeros: ");
		scanf("%d %d %d",&a,&b,&c);
		mayor=a;
			if(b>mayor) mayor=b;
			if(c>mayor) mayor=c;
				printf("Mayor: %d", mayor);
	
	return 0;
}