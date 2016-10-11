#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n = 0;
void mostraMaior(float * dados);
void mostraMenor(float * dados);
float * recebedados(float *dados);
int main (){
    float * dados;
    dados = (float *) malloc(1*sizeof (float));
    int x = 0;
    printf("Menu: ");
    do{
        system ("cls");
        printf("Digite: \n 1-Cadastrar numero\n 2- Calcular media\n 3-Mostrar o maior\n 4-Mostrar o menor\n 5- Sair\n");
        scanf("%d", &x);
         switch(x){
     case 1:
        dados = recebedados(dados);
        break;
     case 2:
        media(dados);
        break;
     case 3:
        mostraMaior(dados);
        break;
     case 4:
        mostraMenor(dados);
        break;
     case 5:
        free(dados);
        break;
         }
    }while (x != 5);
    return 0;
}
float * recebedados(float *dados){
    printf("Digite um numero: ");
    scanf("%f", &dados[n]);
    n++;
    dados = (float *) realloc(dados, (n+1)*sizeof (float));
    return dados;
}
    void media(float * dados){
    int i, q = 0;
    float med = 0;
    for(i=0; i<n; i++){
        med = med + dados[i];
        q++;

    }
    printf("Media = %f", med/q);

    system ("pause");
}
void mostraMaior(float * dados){
    int i;
    float m;
    m = dados[0];
    for(i=0; i<n; i++){
        if( dados[i]>m)
            m = dados[i];
    }
    printf("Maior numero: %f", m);
    system ("pause");
}

void mostraMenor(float * dados){
    int i;
    float m;
    m = dados[0];
    for(i=0; i<n; i++){
        if( dados[i]<m)
            m = dados[i];
    }
    printf("Menor numero: %f", m);
    system ("pause");
}
