#include <stdint.h>
#include <stdio.h>
#define swap(a, b)  \
    do {            \
        (a) ^= (b); \
        (b) ^= (a); \
        (a) ^= (b); \
    } while (0)

int main() {
    uint32_t a, b, tmp;
    scanf("%u %u", &a, &b);

    if (a < b) swap(a, b);
    while (b) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    printf("%u\n", a);
    return 0;
}
