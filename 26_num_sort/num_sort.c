#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NUM {
    char arr[64];
    int64_t num;
    int sum;
} Num;

int cmp(const void *_a, const void *_b) {
    Num *a, *b;

    a = (Num *)_a;
    b = (Num *)_b;
    if (a->sum > b->sum) {
        return 1;
    }
    if (a->sum == b->sum && a->num > b->num) {
        return 1;
    }
    return 0;
}

void num_init(Num *n) {
    n->num = 0;
    n->sum = 0;
}

void num_insert(Num *n, char *input) {
    char *ptr;

    strcpy(n->arr, input);
    n->num = (int64_t)atol(input);
    ptr = n->arr;
    while (*ptr) {
        n->sum += *ptr++ - '0';
    }
}

int main() {
    Num *n;
    uint32_t num;
    char input[64];

    scanf("%u", &num);
    n = (Num *)malloc(num * sizeof(Num));
    for (int i = 0; i < num; ++i) {
        scanf("%63s", input);
        num_init(&n[i]);
        num_insert(&n[i], input);
    }
    qsort(n, num, sizeof(n[0]), cmp);
    for (int i = 0; i < num; ++i) {
        printf("%s%c", n[i].arr, " \n"[i == num - 1]);
    }
    free(n);
    return 0;
}
