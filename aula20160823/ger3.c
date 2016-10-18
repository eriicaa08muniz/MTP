#include <stdio.h>

int main()
{
    int x, i;
    int soma = 0;
    printf("Digite um Numero: \n");
    scanf("%d", &x);
    for(i=1; i<x; i++)
    {
        if(x%i == 0)
            soma = soma + i;
    }
    if(soma == x)
        printf("E PERFEITO");
    else
        printf("NAO E PERFEITO");
    return 0;
}
