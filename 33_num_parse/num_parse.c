#include <stdint.h>
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
    char input[8192];
    char *ptr, *saveptr;
    char delm[] = " ";
    int64_t sum, size;

    while (fgets(input, 8192, stdin) != NULL) {
        clear_newline(input, strlen(input));
        sum = 0;
        size = 0;
        ptr = input;
        ptr = strtok_r(ptr, delm, &saveptr);
        sum += atoll(ptr);
        ++size;
        while ((ptr = strtok_r(NULL, delm, &saveptr)) != NULL) {
            sum += atoll(ptr);
            ++size;
        }
        printf("Size: %lld\n", size);
        printf("Average: %.03Lf\n", (long double)sum / (long double)size);
    }
    return 0;
}
