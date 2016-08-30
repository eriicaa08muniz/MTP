#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <inttypes.h>
int main() {
    int i, numero;
    long long int fatorial=1;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);
    for(i=2; i<=numero; i++)
        fatorial=fatorial*i;
    printf("%"PRId64,fatorial);
    return 0;
}
