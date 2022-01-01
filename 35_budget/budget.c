#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(uint32_t *)a - *(uint32_t *)b;
}

int main() {
    uint32_t n_test;
    uint32_t budget, n_worker, n_gift, sum;
    uint32_t *cost;

    scanf("%u", &n_test);
    for (uint32_t i = 0; i < n_test; ++i) {
        scanf("%u %u %u", &budget, &n_worker, &n_gift);
        cost = (uint32_t *)calloc(n_gift, sizeof(uint32_t));
        for (uint32_t j = 0; j < n_gift; ++j) {
            scanf("%u", &cost[j]);
        }
        qsort(cost, n_gift, sizeof(cost[0]), cmp);
        sum = 0;
        for (uint32_t j = 0; j < n_worker; ++j) {
            sum += cost[j];
        }
        if (sum <= budget) {
            printf("%u\n", sum);
        } else {
            printf("Impossible\n");
        }
        free(cost);
    }
    return 0;
}
