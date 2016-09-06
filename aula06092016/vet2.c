#include <stdio.h>
int main (){
    int vetor[10];
    int aux, i, j ,k, l;
    for ( i = 0; i<10; i++){
    printf("Entre com o numero %d do vetor: ", i+1);
    scanf("%d", &vetor[i]);
    }
    for(j=0,k=9; j<5; j++,k--){

         aux=vetor[j];
         vetor [j]= vetor[k];
         vetor[k]=aux;

    }
    for(l = 0; l<10; l++ )
       printf("%d\n", vetor[l]);

return 0;
}
