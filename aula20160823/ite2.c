#include <stdio.h>
int main () {
    int i=0;
    int numero, potencia, resultado=1;
    printf("Digite o base:");
    scanf("%d", &numero);
    printf("Digite a potencia:");
    scanf("%d", &potencia);
    while (i<potencia)
    {
        resultado=resultado*numero;
        i++;
    }

    printf("O resultado e: %d", resultado);
    return 0;
}


