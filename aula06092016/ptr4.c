
#include <stdio.h>
int main (){
  int num1, num2, soma;
  unsigned char * ponteiro = NULL;
  printf("Digite o primeiro numero real: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero real: ");
  scanf("%d", &num2);
  printf ("%p : %d\n", &num1, num1);
  printf ("%p : %d\n", &num2, num2);
  soma = num1 + num2;
  printf ("%p : %d\n", &soma, soma);


 return 0;
}
