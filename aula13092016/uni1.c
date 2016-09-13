#include <stdio.h>
typedef enum {INTEGER = 1, STRING = 2, FLOAT = 3} Type;
typedef struct {
struct Desconhecido{
    Type tipo;
    union {
        int i;
        char s[256];
        float f;

    };


};
}
