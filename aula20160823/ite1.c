#include <stdio.h>
int main () {
    int i;
    int numero, fatorial=1;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);
    for(i=2; i<=numero; i++)
        fatorial=fatorial*i;
    printf("O fatorial do numero e:%d",fatorial);
    return 0;
}
