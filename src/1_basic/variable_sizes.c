#include <stdio.h>
#include <stdint.h>
int main(void) {
    int a = 5;
    int8_t b = 25;
    long c = 22;
    long long d = 25;    
    printf("a: %d %ld \n", a, sizeof(a));
    printf("b: %d %ld \n", b, sizeof(b));
    printf("c: %ld %ld \n", c, sizeof(c));
    printf("c: %lld %ld \n", d, sizeof(d));
}
