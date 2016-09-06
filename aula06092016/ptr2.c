#include <stdio.h>
int main (){
    int vetor[] = {0,1,2,4,8};
    int tam = sizeof (vetor)/sizeof(int);
    int contagem = 0;
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) vetor;
     for (; ponteiro < vetor + tam; ponteiro++) {
        printf ("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro == 0x0)contagem++;
    }
    printf("Sao %d os bytes de memoria com apenas 0's.\n", contagem);

    return 0;
}
