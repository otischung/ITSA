#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

bool my_isspace(char c) {
    if (c == '\r' || c == '\n') {
        return true;
    }
    return false;
}

void clear_newline(char *str, int len) {
    char *ptr;

    ptr = str + len - 1;
    while (my_isspace(*ptr) && ptr >= str) {
        *ptr-- = '\0';
    }
}

uint32_t sum(char *str) {
    uint32_t tot;
    char *ptr;

    tot = 0;
    ptr = str;

    while (*ptr) {
        tot += *ptr++;
    }
    return tot;
}

int main() {
    char input[64];
    char *ptr;
    int num;

    scanf("%d", &num);
    scanf("%*[^\n]");
    scanf("%*[\n]");
    for (int i = 0; i < num; ++i) {
        fgets(input, 64, stdin);
        clear_newline(input, strlen(input));
        printf("%u\n", sum(input));
    }
    return 0;
}
