#include <stdio.h>

#define N 20
struct CADASTRO {
    char nome;
    int idade;
    int telefone;


}vet[N];
void cadastrar(i)
{
    for(;i<N;i++){

    system("cls")
    printf("Nome: ");
    scanf("%s", vet[i].nome);
    printf()
    }
}
int main (){
int  i=0,op;
do{
        printf("Escolha uma opçao%d \n", &op);
        printf("(1)Cadastrar", i);
        printf("(2)Listar nomes ");
        printf("(3)Listar telefone ");
        printf("(4)Listar idade");
        printf("(5)Sair\n");
        scanf("%d", &op);
        switch(op)
            case 1:
                cadastrar();
                break;
            case 2:
                listarn();
                break;
            case 3:
                listartel();
                break;
            case 4:
                listarid();
                break;
            case 5:
                break;


        }while(op!=5)



return 0;
}
