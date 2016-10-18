#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
    int linhas, colunas;
    float matriz[][];
    float * dados;
    printf("Informe a ordem da Matriz:\nLinhas:");
    scanf("%d", &linhas);
    printf("Colunas:");
    scanf("%d", &colunas);
    dados = malloc(ndados*sizeof(float));
    recebe(dados, ndados);
    return 0;
}

void recebe(matriz[][], int linhas, int colunas)
{
    int i, j;
    for (i=0; i<N; i++)
        for(j=0; j<M; j++)
        {
            printf("Entre com elemento(%d,%d): ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
}
