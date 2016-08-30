#include <stdio.h>
#include <complex.h>
int main() {
    double complex z1, z2, soma;
    double R_z1, I_z1, R_z2, I_z2;
     printf("Real de z1: ");
     scanf("%lf", &R_z1);
     printf("Imaginario de z1: ");
     scanf("%lf", &I_z1);
     printf("Real de z2: ");
     scanf("%lf", &R_z1);
     printf("Imaginario de z2: ");
     scanf("%lf", &I_z2);
     z1= R_z1 + I_z1*I;
     z2= R_z2+ I_z2*I;
     soma= z1 + z2;
     printf("Soma: %lf + %lf*i\n", creal(soma), cimag(soma));
    return 0;

}

