#include <stdio.h>



int main(){
    float a, b ,c, raiz1, raiz2, delta;
    printf("Digite os coeficientes lineares: ");
    printf("\na=");
    sacnf("%f", &a);
    printf("\nb=");
    sacnf("%f", &b);
    printf("\nc=");
    sacnf("%f", &c);
    delta=calculo_delta(a, b, c);
    if (delta>=0){
        raiz1=calculo_raizmais(delta, a, b);
        raiz2=calculo_raizmenos(delta, a, b);
        printf("As raizes sao: %f , %f", raiz1, raiz2);
    }
    else
        printf("Nao existem raizes reais!!");
return 0;
}

float calculo_delta(float a, float b, float c){
float delta;
delta = (b*b) - 4*a*c;
return delta;
}
float calculo_raizmais(float delta,float a,float b){
float raiz;
raiz = (-b + sqrt(delta))/(2*a);
raiz2 = (-b - sqrt(delta))/(2*a);
return raiz;
}
float calculo_raizmenos(float delta,float a,float b){
    float raiz;
    raiz = (-b - sqrt(delta))/(2*a);
    return raiz;
}





