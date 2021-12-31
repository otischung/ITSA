#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DIC {
    char *arr[1024];
    uint32_t cnt;
} Dic;

void dic_init(Dic *d) {
    d->cnt = 0;
}

void dic_free(Dic *d) {
    for (int i = 0; i < d->cnt; ++i) {
        free(d->arr[i]);
    }
    d->cnt = 0;
}

int dic_insert(Dic *d, char *word) {
    if (d->cnt == 1024) {
        fprintf(stderr, "Full\n");
        return -1;
    }
    d->arr[d->cnt++] = strdup(word);
    return 0;
}

int dic_search(Dic *d, char *target) {
    for (int i = 0; i < d->cnt; ++i) {
        if (!strcmp(d->arr[i], target)) {
            return i;
        }
    }
    return -1;
}

void to_lower(char *const word, size_t len) {
    char *ptr;

    ptr = word;
    for (size_t i = 0; i < len; ++i) {
        if (isupper(*ptr)) {
            *ptr += 32;
        }
        ++ptr;
    }
}

int main() {
    Dic d;
    char input[1024];

    dic_init(&d);
    while (~scanf("%s", input)) {
        to_lower(input, strlen(input));
        if (dic_search(&d, input) == -1) {
            dic_insert(&d, input);
        }
    }
    for (int i = 0; i < d.cnt; ++i) {
        printf("%s%c", d.arr[i], " \n"[i == d.cnt - 1]);
    }
    dic_free(&d);
    return 0;
}
