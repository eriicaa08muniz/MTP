#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int joga_dado();


int main (){
    srand(time(0));
    int i,  soma=0;
    int  num_user[5];
    for(i=0; i<5; i++){
        num_user[i] = joga_dado();
        printf("%d ",num_user[i] );
        soma = soma + num_user[i];

    }
    printf("\nA soma e: %d\n", soma);
    if (soma>= 27)
        printf("\nVoce ganhou!!!\n");
    else{
        printf("Voce perdeu!!!");
    }
return 0;
}
int joga_dado(){
int numero = (rand()%6)+1;
return numero;
}
