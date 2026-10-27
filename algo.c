#include <stdio.h>
#include <stdlib.h>

#define DEBUG

int main(){
     int i, s=0;
     for(i=0;i<10;i++){
        s+=i;
        #ifdef DEBUG
            printf("\n suma parcial %d", s);
        #endif // DEBUG
     }
     printf("\n suma total %d", s);
}

/*
#define cargar(V,T) {int i;\
                    for(i=0;i<T;i++){\
                        printf("(%d): ", i);\
                        scanf("%d", &V[i]);\
                    }}
#define ordenar(V,T) {int i, j, aux;\
                    for(i=0;i<T-1;i++){\
                        for(j=0;j<T-i-1;j++)\
                            if(V[j]>V[j+1]){\
                                aux = V[j+1];\
                                V[j+1]= V[j];\
                                V[j]= aux;\
                            }\
                    }}
#define mostrar(V,T) {int i;\
                    for(i=0;i<T;i++){\
                        printf("(%d): %d\n", i, V[i]);\
                    }}

#define max(V,T, M) {int i;\
                    M=V[0];\
                    for(i=0;i<T;i++){\
                        if(V[i]>M)\
                            M = V[i];\
                    }}
*/
/*
#include "macros.c"
int main(){
    int vec[5], tam = 5, max;
    cargar(vec,tam)
    ordenar(vec,tam)
    mostrar(vec,tam)
    max(vec,tam, max)
    printf("MAX: %d", max);
    return 0;
}
*/
