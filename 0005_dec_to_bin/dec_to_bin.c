#include <stdio.h>
#include <stdint.h>

int main() {
    int input;
    int8_t result;
    scanf("%d", &input);
    result = (int8_t)input;
    printf("%d", !!(result & 0b10000000));
    printf("%d", !!(result & 0b01000000));
    printf("%d", !!(result & 0b00100000));
    printf("%d", !!(result & 0b00010000));
    printf("%d", !!(result & 0b00001000));
    printf("%d", !!(result & 0b00000100));
    printf("%d", !!(result & 0b00000010));
    printf("%d\n", !!(result & 0b00000001));
    return 0;
}
