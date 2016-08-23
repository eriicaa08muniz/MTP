#include <stdio.h>
int main () {
    int numero, i;
    printf("Me da um numero:");
    scanf("%d", &numero);
    for(i = 2; i<numero; i++) {
        if(numero%i==0) {
            printf("Nao e primo!\n");
            break;
        }
    }
    if(i==numero)
        printf("primo!!!\n");
    return 0;
}

