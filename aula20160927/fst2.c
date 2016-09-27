#include <stdio.h>

struct Soma_racional{
    int numerador;
    int denominador;
};
struct Soma_racional soma(int numerador1, int denominador1,int numerador2, int denominador2);
int main ()
{
    struct Soma_racional resposta;
    int numerador1, denominador1, numerador2, denominador2;
    printf ("Entre com o primeiro numero racinal: ");
    scanf("%d/%d",&numerador1,&denominador1);
    printf ("Entre com o segundo numero racinal: ");
    scanf("%d/%d",&numerador2,&denominador2);
    resposta = soma (numerador1, denominador1, numerador2, denominador2);
    printf(" %d /%d\n", resposta.numerador, resposta.denominador);
    return 0;
}
struct Soma_racional soma(int numerador1, int denominador1,int numerador2, int denominador2){
    struct Soma_racional resposta;
    resposta.denominador = denominador1*denominador2;
    resposta.numerador = ((denominador1*denominador2/denominador1)*numerador1)+((denominador1*denominador2/denominador2)*numerador2);
    return resposta;
}

