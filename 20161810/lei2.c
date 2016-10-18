
#include <stdio.h>
#include <time.h>
void mostrar (int x, char * algo);
int main(){
    srand(time(0));
    char algo[256];
    int x;
    printf("Quantidade de numeros que seram mostrados: \n");
    fscanf(stdin, "%d", &x);
    mostrar(x, algo);
    return 0;

}
void mostrar (int x, char * algo){
    int i, j;
    int *y = (int * )malloc(x*sizeof(int));
    FILE * arquivo;
    arquivo = fopen ("Alou.txt", "r");
    for(i=0; i<x; i++)
    {


        fscanf(arquivo,"%d\n", &y[i]);

    }
    fclose(arquivo);
     for(j=0; j<x; j++)
    {


        fprintf(stdout,"%d\n", y[j]);

    }
    free(y);
}
