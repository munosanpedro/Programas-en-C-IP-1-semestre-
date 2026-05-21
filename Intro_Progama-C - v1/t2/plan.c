#include <stdio.h>

int main() {
    int fin, clima, transporte, horario;

    printf("¿Es fin de semana? (1=si, 0=no): ");
    scanf("%d", &fin);

    if (fin == 1) {
        printf("¿Como esta el clima? (1=bueno, 0=malo): ");
        scanf("%d", &clima);

        if (clima == 1) {
            // Agregamos el Horario (usando rango de horas)
            printf("¿Que hora es? (Formato 24hrs, ej: 15): ");
            scanf("%d", &horario);

            if (horario >= 9 && horario <= 18) {
                // Agregamos el Transporte
                printf("¿Tienen transporte disponible? (1=si, 0=no): ");
                scanf("%d", &transporte);

                if (transporte == 1) {
                    printf("\n¡Perfecto! Todo listo para ir al parque.\n");
                } else {
                    printf("\nNo tienen transporte, mejor se quedan a ver pelis.\n");
                }
            } else {
                printf("\nEl parque esta cerrado a esta hora o es muy tarde.\n");
            }
        } else {
            printf("\nCon este clima mejor no salgan.\n");
        }
    } else {
        printf("\nHoy no se puede, hay que trabajar/estudiar.\n");
    }

    return 0;
}