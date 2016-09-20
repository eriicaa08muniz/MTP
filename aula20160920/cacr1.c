#include <stdio.h>
int main(){
    int numero, i;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    for(i=2; i< numero/2; i++){
        if(primo(i) == 1 && primo (numero-i) == 1)
          printf("Soma: %d + %d\n", i, numero-i);

    }

    return 0;
}

int primo (int numero){
int i, verifica = 1;
for (i = 2; i < numero/2; i++){
    if (numero%i == 0)
     verifica = 0;
     break;
}
}
