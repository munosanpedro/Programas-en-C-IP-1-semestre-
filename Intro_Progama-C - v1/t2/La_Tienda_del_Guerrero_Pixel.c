//La_Tienda_del_Guerrero_Pixel
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
    int opcion;
    int opVenta;
    int monedas = 100;
    int espada = 0;
    int pociones = 0;
    int experiencia = 0;
    int nivel = 0;
    int sig_nivel= 10;
    int i;
    int precioEspada = 40;
    int precioPocion = 15;
    
    // Arreglo para guardar inventario
    int inventario[3] = {0, 0, 0};
    char nombreJugador[50];
    char enemigos[4][20] = {"Slime", "Banana", "Esqueleto", "Pato"};
    
    srand(time(NULL));
    
    printf("=== BIENVENIDO ===\n");
    printf("Ingresa el nombre de tu guerrero: ");
    scanf("%s", nombreJugador);
    
    do {
        printf("\n=== TIENDA DEL GUERRERO PIXEL ===\n");
        printf("Guerrero: %s\n", nombreJugador);
        printf("Monedas: %d | Nivel: %d | EXP: %d/%d\n", monedas, nivel, experiencia, sig_nivel);
        printf("\n1. Comprar espada\n");
        printf("2. Comprar pocion\n");
        printf("3. Ver inventario\n");
        printf("4. Entrenar\n");
        printf("5. Vender objetos\n"); 
        printf("6. Salir\n");
        printf("\nSelecciona una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1: // Compra de espada
                if(monedas >= precioEspada) {
                    monedas = monedas - precioEspada;
                    espada++;
                    inventario[0] = espada;
                    printf("\nCompraste una espada!\n");
                } else {
                    printf("\nNo tienes suficientes monedas.\n");
                }
                break;
            case 2: // Compra de poción
                if(monedas >= precioPocion) {
                    monedas = monedas - precioPocion;
                    pociones++;
                    inventario[1] = pociones;
                    printf("\nCompraste una pocion!\n");
                } else {
                    printf("\nNo tienes suficientes monedas.\n");
                }
                break;
            case 3: // Mostrar inventario usando FOR
                printf("\n=== INVENTARIO ===\n");
                for(i = 0; i < 2; i++) {
                    if(i == 0) {
                        printf("Espadas: %d\n", inventario[i]);
                    } else {
                        printf("Pociones: %d\n", inventario[i]);
                    }
                }
                break;
            case 4: {
                printf("\nSaliendo a entrenar...\n");
                printf("\nEntrenando...\n");
                int enemigoIndex = rand() % 4;
                printf("¡Un %s ha aparecido!\n", enemigos[enemigoIndex]);
                printf("Luchando...\n");
                
                for(i = 1; i <= 5; i++) {
                    experiencia = experiencia + 10;
                    printf("Batalla %d completada!\n", i);
                }
                
                printf("Experiencia total: %d\n", experiencia);
                
                if(experiencia > sig_nivel){
                    nivel++;
                    sig_nivel++; 
                    printf("¡Subiste al nivel %d!\n", nivel);
                } else if(experiencia == sig_nivel){
                    nivel++;
                    sig_nivel++;
                    printf("¡Subiste al nivel %d!\n", nivel);
                }
                break;
            }
            case 5: // 2. Permitir vender objetos
                printf("\n=== VENDER OBJETOS ===\n");
                printf("1. Vender Espada (+20 monedas)\n");
                printf("2. Vender Pocion (+7 monedas)\n");
                printf("3. Cancelar\n");
                printf("Selecciona que deseas vender: ");
                
                scanf("%d", &opVenta);

                if(opVenta == 1) {
                    if(inventario[0] > 0) {
                        inventario[0]--;
                        monedas += 20;
                        printf("\nVendiste una espada y obtuviste 20 monedas.\n");
                    } else {
                        printf("\nNo tienes espadas para vender.\n");
                    }
                } else if(opVenta == 2) {
                    if(inventario[1] > 0) {
                        inventario[1]--;
                        monedas += 7;
                        printf("\nVendiste una pocion y obtuviste 7 monedas.\n");
                    } else {
                        printf("\nNo tienes pociones para vender.\n");
                    }
                } else {
                    printf("\nVenta cancelada.\n");
                }
                break;
            case 6:
                printf("\nGracias por jugar!\n");
                break;
            default:
                printf("\nOpcion no valida.\n");
        }
    } while(opcion != 6);
    
    return 0;
}