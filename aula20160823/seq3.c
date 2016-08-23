#include <stdio.h>
int main () {
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota do aluno:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno:");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno:");
    scanf("%f", &nota3);
    media = (2*nota1+3*nota2+5*nota3)/10.0;
    printf("A media do aluno e: %f", media);
    return 0;
}
