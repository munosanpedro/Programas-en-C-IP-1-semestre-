#include <stdio.h>

int main() {
    float saldo, saldo_final;
    int activa;
    float costo_viaje = 5.0; // Precio estándar del Metro 

    printf("--- SISTEMA DE ACCESO METRO ---\n");
    printf("Ingrese el saldo de su tarjeta: $");
    scanf("%f", &saldo);

    // Primera validación: ¿Tiene suficiente para al menos un viaje?
    if (saldo >= costo_viaje) {
        printf("¿Su tarjeta esta activa? (1=si, 0=no): ");
        scanf("%d", &activa);

        if (activa == 1) {
            // Realizamos la operación matemática del cobro
            saldo_final = saldo - costo_viaje;

            printf("\n-------------------------------\n");
            printf("ACCESO CONCEDIDO. ¡Buen viaje!\n");
            printf("Costo del viaje: $%.2f\n", costo_viaje);
            printf("Saldo restante: $%.2f\n", saldo_final);
            printf("-------------------------------\n");
        } else {
            printf("\nERROR: Tarjeta bloqueada o invalida.\n");
        }
    } else {
        printf("\nSALDO INSUFICIENTE. El viaje cuesta $%.2f y usted tiene $%.2f\n", costo_viaje, saldo);
        printf("Por favor, recargue su tarjeta en taquilla.\n");
    }

    return 0;
}