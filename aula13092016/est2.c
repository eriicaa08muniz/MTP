#include <stdio.h>

#include <math.h>

#define RECEBEPONTO(c, ptA) \
    ({printf("Entrar coord x de %c: ", c); \
      scanf("%f", &ptA.x); \
      printf("Entrar coord y de %c: ", c); \
      scanf("%f", &ptA.y);\
      printf("Entrar coord z de %c: ", c); \
      scanf("%f", &ptA.z);})

#define SOMA(ptA, ptB, soma)\
    ({soma.x= ptA.x + ptB.x;\
      soma.y = ptA.y + ptB.y;\
      soma.z = ptA.z + ptB.z;})
#define MOSTRAPONTO(ponto)\
    ({ printf ("(%g; %g; %g )\n", ponto.x, ponto.y, ponto.z); })

#define DISTANCIA(pt1, pt2, d)\
    ({ d = sqrt (pow(pt1.x - pt2.x,2.f)+ \
                pow (pt1.y - pt2.y,2.f)+\
                pow (pt1.z - pt2.z,2.f));})

struct ponto{
    float x;
    float y;
    float z;

    };
int main(){
    struct ponto A, B, S;
    float distancia;
    RECEBEPONTO('A', A);
    RECEBEPONTO('B', B);
    SOMA(A, B, S);
    MOSTRAPONTO(S);
    DISTANCIA(A, B, distancia);
    printf("A distancia entre eles: %g", distancia);
    return 0;
}

