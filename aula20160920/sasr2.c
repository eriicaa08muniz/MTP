#include <stdio.h>
int mostrapar();

int main (){
    int i;
    printf("Digite 1 para ver os pares de 1 a 10 e 2 para os impares de 1 a 10: ");
    scanf("%d", &i);
    if(i==1)
        mostrapar();
    if(i==2)
        mostraimpar();
return 0;
}

int mostrapar(){
    int i;
for(i=1; i<11; i++){
    if(i%2==0)
       printf("%d\n", i);
}
}
int mostraimpar(){
    int i;
for(i=1; i<11; i++){
    if(i%2!=0)
       printf("%d\n", i);
}

       }
