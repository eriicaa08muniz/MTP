#include <stdio.h>
#include <math.h>
int main() {
    float lado1,lado2,angulo, resultadoLado3;
    printf("Lado 1 do triangulo: ");
    scanf("%f", &lado1);
    printf("Lado 2 do triangulo: ");
    scanf("%f", &lado2);
    printf("Angulo, em radiandos, formado entre os dois lados: ");
    scanf("%f", &angulo);
    resultadoLado3 = sqrt (pow(lado1, 2.)+pow(lado2,2.)-2*lado1*lado2*cos(angulo));
    printf("O terceiro lado e: %f", resultadoLado3);
    return 0;
}
