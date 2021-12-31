#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char haystack[1024];
    char needle[1024];
    char *ptr;
    int str_cnt;

    str_cnt = 0;
    ptr = haystack;
    // fgets(needle, 1024, stdin);
    // fgets(haystack, 1024, stdin);
    // fgets(haystack, 1024, stdin);
    // if (needle[strlen(needle) - 1] == '\n')
    //     needle[strlen(needle) - 1] = '\0';
    // if (haystack[strlen(haystack) - 1] == '\n')
    //     haystack[strlen(haystack) - 1] = '\0';
    scanf("%s %s", needle, haystack);
    while ((ptr = strstr(ptr, needle)) != NULL) {
        ++str_cnt;
        ++ptr;
    }
    printf("%d\n", str_cnt);
    return 0;
}
