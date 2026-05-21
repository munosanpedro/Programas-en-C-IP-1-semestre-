#include <stdio.h>

int main() {
    float cal;

    printf("Ingresa la calificacion: ");
    scanf("%f", &cal);

    if (cal < 6) {
        printf("Reprobado\n");
    } 
    else if (cal >= 6 && cal <= 10) {
        printf("Aprobado: "); // Se imprime esto primero
        
        // Ahora verificamos el rango específico
        if (cal < 8) {
            printf("Bien\n");
        } else {
            printf("Excelente\n");
        }
    } 
    else {
        printf("Calificacion no valida (debe ser entre 0 y 10)\n");
    }

    return 0;
}