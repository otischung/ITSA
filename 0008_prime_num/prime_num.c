#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t n;
    scanf("%u", &n);

    if (n == 1 || n == 2) {
        printf("YES\n");
    } else {
        for (int i = 2; i * i <= n; ++i) {
            if (n % i) continue;
            else {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
    return 0;
}
