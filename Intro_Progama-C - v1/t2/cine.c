#include <stdio.h>

int main() {
    int boleto, edad, sala;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Puede entrar al cine\n");
        printf("Tiene boleto para alguna funcion? (1=si, 0=no): ");
        scanf("%d", &boleto);

        if (boleto == 1) {
            printf("Bienvenido, indique la sala de su boleto: ");
            scanf("%d", &sala);

            if (sala == 1) {
                printf("Adelante, su sala es del lado izquierdo\n");
            } else if (sala == 2) {
                printf("Adelante, su sala es del lado derecho\n");
            } else {
                printf("La sala que indica no existe, intente de nuevo\n");
            }
        } else {
            printf("Intente comprar un boleto primero.\n");
        }
    } else {
        printf("No puede entrar al cine por ser menor de edad.\n");
    }

    return 0;
}