#include <stdio.h>
int main (){
    int vetor[10];
    int aux, i, j, soma;
    for ( i = 0; i<10; i++){
    printf("Entre com o numero %d do vetor: ", i+1);
    scanf("%d", &vetor[i]);
    }
    for(j=0; j<10; j++){
            soma=soma+vetor[j];
    }

       printf("%d\n", soma);

return 0;
}

