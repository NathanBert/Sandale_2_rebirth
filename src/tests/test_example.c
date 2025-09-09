#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* test simple */
    if (1 + 1 != 2) {
        fprintf(stderr, "arith fail\n");
        return 1;
    }
    printf("all good\n");
    return 0;
}
