#include <stdio.h>
#include <math.h>
int main() {
    float numero, base, resultado;
    printf("Numero: ");
    scanf("%f", &numero);
    printf("Base do logaritimo: ");
    scanf("%f", &base);
    resultado = log(numero)/log (base);
    printf("O logaritimo desse numero nessa base e: %f", resultado);
    return 0;
}
