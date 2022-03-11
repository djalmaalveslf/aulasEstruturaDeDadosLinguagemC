#include <stdio.h>

int main(void){
    int x = 0;
    int *p1 = NULL;

    printf("%d\n", x);

    p1 = &x;

    *p1 = 8;

    printf("%d\n", x);

    return 0;
}