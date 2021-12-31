#include <stdio.h>

int main() {
    int start, start_hr, start_min;
    int end, end_hr, end_min;

    scanf("%d %d %d %d", &start_hr, &start_min, &end_hr, &end_min);
    start = start_hr * 60 + start_min;
    end = end_hr * 60 + end_min;

    if (end - start <= 30) {
        printf("0\n");
    } else if (end - start <= 120) {
        printf("%d\n", 30 * ((end - start) / 30));
    } else if (end - start <= 240) {
        printf("%d\n", 120 + 40 * ((end - start - 120) / 30));
    } else if (end - start > 240) {
        printf("%d\n", 280 + 60 * ((end - start - 240) / 30));
    }

    return 0;
}
