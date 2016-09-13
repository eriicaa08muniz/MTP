#include <stdio.h>

#include <math.h>

#define RECEBEPONTO(c, ptA) \
    ({printf("Entrer coord x de %c: ", c); \
      scanf("%f", &ptA.x); \
      printf("Entrer coord y de %c: ", c); \
      scanf("%f", &ptA.y);})

#define SOMA(ptA, ptB, soma)\
    ({soma.x= ptA.x + ptB.x;\
      soma.y = ptA.y + ptB.y;})
#define MOSTRAPONTO(ponto)\
    ({ printf ("(%g; %g )\n", ponto.x, ponto.y); })

#define DISTANCIA(pt1, pt2, d)\
    ({ d = sqrt (pow(pt1.x - pt2.x,2.f)+ \
             (pow (pt1.y - pt2.y,2.f)));})

struct ponto{
    float x;
    float y;

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

