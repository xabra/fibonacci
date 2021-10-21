#include <stdio.h>

int main() {
    int fibmax = 40;

    int fibprevprev = 0;
    int fibprev = 1;
    int i = 1;
    printf("%d: %d\n", i, fibprev);

    for ( i=2; i < fibmax; i++) {
        int fibnext = fibprev + fibprevprev;
        printf("%d: %d\n", i, fibnext);
        fibprevprev = fibprev;
        fibprev = fibnext;
    }
}