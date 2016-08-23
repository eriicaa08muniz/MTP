#include <stdio.h>
#include <time.h>
int main () {
    srand(time(0));
    int numero, x, soma;
    printf("Digite um numero inteiro nao negativo:");
    scanf("%d", &numero);
    x=rand()%2;
    soma=x+numero;
    if(soma%2==0)
        printf("O numero e par.");
    else
        printf("O numero e impar.");
        return 0;
}



