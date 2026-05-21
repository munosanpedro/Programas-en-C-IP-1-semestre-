#include<stdio.h>
#include<math.h>
//if decicion  for repeticion menu switch-case
int main(){
	float na, nb, resultado;
	int opcion;
	printf("Calculadora\n");
	printf("Valor A\n");
	scanf("%f", &na);
	printf("Valor B\n");
	scanf("%f", &nb);
	
	printf("\n1.Suma\n2.Resta\n 3.Mult\n 4.Div\n");
	printf("5.Potencias\n6.Raiz\n7.Porcentaje\n");
	printf("Seleccion:  ");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1: resultado= na+nb; break;
		case 2: resultado= na-nb; break;
		case 3: resultado= na*nb; break;
		case 4: 
		if(na !=0)resultado= na/nb;
		else{printf("Error");return 1; }
		break;
		case 5: resultado= pow(na,nb); break;
		case 6: if(na >= 0)resultado= sqrt(na);
		else{printf("Raiz iamginaria"); return 1;} break;
		case 7: resultado= (na*nb)/100; break;
		default:
				printf("Opcion invalida"); return 1;
	}
	
	printf("Resultado %.3f", resultado);
	return 0;
}
