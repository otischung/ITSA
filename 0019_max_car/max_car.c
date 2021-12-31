#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    uint32_t num;
    uint32_t start, end;
    uint32_t time[24];
    uint32_t cars;

    cars = 0;
    memset(time, 0, 24 * sizeof(uint32_t));
    scanf("%u", &num);

    for (int i = 0; i < num; ++i) {
        scanf("%u %u", &start, &end);
        for (int j = start - 1; j < end - 1; ++j) {  // 給佔用時間區間各加一輛車
            ++time[j];
        }
    }

    for (int i = 0; i < 24; ++i) {  // 找最大值
        if (cars < time[i]) {
            cars = time[i];
        }
    }

    printf("%u\n", cars);
    return 0;
}
