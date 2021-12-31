#include <stdint.h>
#include <stdio.h>

int main() {
    uint32_t n, sum;
    scanf("%u", &n);

    sum = 0;
    for (int i = 3; i <= n; i += 3) {
        sum += i;
    }
    printf("%u\n", sum);

    return 0;
}
