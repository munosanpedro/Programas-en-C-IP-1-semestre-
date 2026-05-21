#include <stdio.h>

int main() {
    int ventilador, aire;

    // Pregunta 1: Ventilador
    printf("¿Deseas encender el ventilador? (1=si, 0=no): ");
    scanf("%d", &ventilador);

    if (ventilador == 1) {
        printf("-> Ventilador ENCENDIDO\n");
    } else {
        printf("-> Ventilador permanece APAGADO\n");
    }

    printf("\n------------------------------------\n");

    // Pregunta 2: Aire acondicionado
    printf("¿Tambien deseas encender el aire acondicionado? (1=si, 0=no): ");
    scanf("%d", &aire);

    if (aire == 1) {
        printf("-> Aire acondicionado ENCENDIDO\n");
    } else {
        printf("-> Aire acondicionado permanece APAGADO\n");
    }

    printf("\nConfiguracion finalizada. ¡Disfruta el clima!\n");

    return 0;
}