#include <stdio.h>

int main() {
    int salir, lluvia, clima;

    printf("¿Vas a salir? (1=si, 0=no): ");
    scanf("%d", &salir);

    if (salir == 1) {
        // Nueva sección: Clima/Chamarra
        printf("¿Hace frio afuera? (1=si, 0=no): ");
        scanf("%d", &clima);
        
        if (clima == 1) {
            printf("-> Ponte una chamarra.\n");
        }

        // Sección: Lluvia/Paraguas
        printf("¿Esta lloviendo? (1=si, 0=no): ");
        scanf("%d", &lluvia);
        
        if (lluvia == 1) {
            printf("-> Lleva paraguas.\n");
        }
        
        printf("¡Que tengas buen viaje!\n");

    } else {
        printf("Te quedas en casa, ponte comodo.\n");
    }

    return 0;
}