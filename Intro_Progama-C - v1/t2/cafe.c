#include <stdio.h>

int main() {
    float dinero, cambio, total_gastado = 0;
    int opcion, continuar = 1; // 1 significa "si, quiero seguir"

    printf("--- BIENVENIDO A LA CAFETERIA ---\n");
    printf("Ingrese cuanto dinero trae en total: $");
    scanf("%f", &dinero);

    //se repite mientras 'continuar' sea 1
    while (continuar == 1) {
        printf("\n--- MENU ---\n");
        printf("1. Cafe Americano - $25\n");
        printf("2. Capuchino      - $40\n");
        printf("3. Chocolate      - $35\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            if (dinero >= 25) {
                dinero -= 25; // Restamos el precio al dinero disponible
                total_gastado += 25;
                printf("Agregado Cafe Americano. Saldo restante: $%.2f\n", dinero);
            } else {
                printf("No te alcanza para esto.\n");
            }
        } 
        else if (opcion == 2) {
            if (dinero >= 40) {
                dinero -= 40;
                total_gastado += 40;
                printf("Agregado Capuchino. Saldo restante: $%.2f\n", dinero);
            } else {
                printf("No te alcanza para esto.\n");
            }
        }
        //opciones

        printf("\n¿Quieres comprar algo mas? (1=si, 0=no): ");
        scanf("%d", &continuar);
    }

    printf("\n----------------------------------\n");
    printf("Total gastado: $%.2f\n", total_gastado);
    printf("Tu cambio final es: $%.2f\n", dinero);
    printf("¡Gracias por tu compra!\n");

    return 0;
}