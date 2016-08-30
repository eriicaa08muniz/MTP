#include <stdio.h>
#include <math.h>
#include <complex.h>
int main() {
    double complex Z, M;
    double  produtoR, produtoI;
    double R_z1, I_z1;
     printf("Real de z: ");
     scanf("%lf", &R_z1);
     printf("Imaginario de z: ");
     scanf("%lf", &I_z1);
     Z = R_z1 +I_z1*I;
     M = Z * conj(Z);
     produtoR= pow(R_z1,2.);
     produtoI= pow(I_z1,2.);
     printf("Produto: %lf - %lf*i\n", creal(M), cimag(M));
    return 0;

}
