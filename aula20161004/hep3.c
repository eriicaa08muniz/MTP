#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char * texto = malloc(sizeof(char));
    texto[0] = '\0';
    printf("Entre com o texto:\n");
    recebetexto(texto);
    return 0;
}
void recebetexto(char * texto){
    int c, tamanho = strlen(texto);
    do{
        c = getchar();
        if(c !='#'){
            texto[tamanho] = c;
            tamanho++;
            texto = realloc(texto,(tamanho+1)*sizeof(char));
             texto[tamanho] = '\0';
        }

    }while(c !='#');
}
