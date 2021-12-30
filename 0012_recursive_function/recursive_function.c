#include <stdint.h>
#include <stdio.h>

uint32_t f(uint32_t n) {
    if (n == 0 || n == 1) {
        return n + 1;
    } else {
        return f(n - 1) + f(n / 2);
    }
}

int main() {
    uint32_t n;
    scanf("%u", &n);
    printf("%u\n", f(n));
    return 0;
}
