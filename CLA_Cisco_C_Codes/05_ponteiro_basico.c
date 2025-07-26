#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a;
    printf("Valor de a: %d\n", a);
    printf("Valor via ponteiro: %d\n", *ptr);
    return 0;
}