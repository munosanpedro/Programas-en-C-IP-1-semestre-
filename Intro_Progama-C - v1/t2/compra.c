#include <stdio.h>

int main() {
    float compra;
    printf("Ingrese el monto de la compra:");
    scanf("%f", &compra);

    if (compra > 500) {
        printf("Aplica descuento del 10 porciento \n");
        compra = compra - (compra * 0.10); 
        printf("El total con descuento es: %.2f\n", compra); 
    } else {
        printf("No aplica descuento. Total: %.2f\n", compra);    
    }

    return 0;
}