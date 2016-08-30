#include <stdio.h>
#include <ctype.h>
int main() {
    int indice = 0, cont=0;//1o caracter da string
    char investigador;
    char frase[256];
    printf ("Digite uma frase: ");
    gets (frase);
    investigador = frase[indice];
    while(investigador != '\0'){
        indice ++;
        if (isalpha(investigador)!=0)
            cont++;
        investigador = frase [indice];
    }
    printf("Sua frase tem %d", cont, "letras");
    return 0;
}
