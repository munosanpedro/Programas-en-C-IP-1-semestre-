#include <stdio.h>
#include <string.h> // Necesaria para comparar las palabras

int main() {
    int pc, net;
    char usuario[20];
    char clave[20];

    printf("¿La computadora esta encendida? (1=si, 0=no): ");
    scanf("%d", &pc);

    if (pc == 1) {
        printf("¿Hay conexion a internet? (1=si, 0=no): ");
        scanf("%d", &net);

        if (net == 1) {
            // Si hay PC e Internet, pedimos credenciales
            printf("Ingrese su usuario: ");
            scanf("%s", usuario);
            printf("Ingrese su contraseña: ");
            scanf("%s", clave);

            // Comparamos con strcmp. Si devuelve 0, son iguales.
            if (strcmp(usuario, "alumno123") == 0 && strcmp(clave, "uacm123") == 0) {
                printf("\n--- Acceso concedido. Entrando a la clase virtual... ---\n");
            } else {
                printf("\nError: Usuario o contraseña incorrectos.\n");
            }

        } else {
            printf("No puedes entrar sin internet.\n");
        }
    } else {
        printf("Primero debes encender la computadora.\n");
    }

    return 0;
}