#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_newline(char *str, size_t len) {
    char *ptr;

    ptr = str + len - 1;
    while (*ptr == '\r' || *ptr == '\n') {
        *ptr-- = '\0';
    }
}

int main() {
    char input[128];
    char *ptr;
    int bias;

    fgets(input, 128, stdin);
    scanf("%d", &bias);
    clear_newline(input, strlen(input));
    while (bias < 0) {
        bias += 26;
    }
    
    ptr = input;
    while (*ptr) {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = (*ptr - 'A' + bias) % 26 + 'A';
        } else if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = (*ptr - 'a' + bias) % 26 + 'a';
        } else if (*ptr >= '0' && *ptr <= '9') {
            *ptr = (*ptr - '0' + bias) % 10 + '0';
        }
        ++ptr;
    }
    printf("%s\n", input);
    return 0;
}
