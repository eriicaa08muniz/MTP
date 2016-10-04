#include <stdio.h>
#define N 2
#define M 4
void recebeMatriz (float matriz[N][M]);
void imprime(float matriz[N][M]);
void transporMatriz(float matriz[N][M], float transposta[M][N]);
void imprimeT(float matriz[M][N]);
int main(){
float matriz[N][M], transposta[M][N];
    recebeMatriz(matriz);
    imprime(matriz);
    transporMatriz(matriz, transposta);
    printf("A transposta e:\n");
    imprimeT(transposta);
    return 0;

}
void recebeMatriz (float matriz[N][M]){
int i, j;
for(i=0; i<N; i++)
    for(j=0; j<M; j++){
        printf("Digite o elemento da posicao (%d, %d): \n", i,j);
        scanf("%f", &matriz[i][j]);
}
}
void imprime(float matriz[N][M]){
int i, j;
printf("Matriz %dx%d:\n", N, M);
for(i=0; i<N; i++)
    for(j=0; j<M; j++){
        printf("%g%c", matriz[i][j], (j!=M-1)? '\t' : '\n');}
}
void transporMatriz(float matriz[N][M], float transposta[M][N]){
    int i, j;
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            transposta[j][i] = matriz[i][j];
}
void imprimeT(float transposta[M][N]){
int i, j;
printf("Matriz %dx%d:\n", M, N);
for(i=0; i<M; i++)
    for(j=0; j<N; j++){
        printf("%g%c", transposta[i][j], (j!=N-1)? '\t' : '\n');}}
