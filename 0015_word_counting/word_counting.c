#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[128];
    char *ptr;
    int word_cnt;
    int arr[26];
    bool inword;

    word_cnt = 0;
    memset(arr, 0, 26 * sizeof(int));
    inword = false;

    fgets(input, 128, stdin);
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    ptr = input;
    while (*ptr) {
        if (!isspace(*ptr)) {  // This is NOT a space.
            if (!inword) {     // The start of a word.
                inword = true;
                ++word_cnt;
            }
            if (*ptr >= 'A' && *ptr <= 'Z') {
                arr[*ptr - 'A'] += 1;
            } else if (*ptr >= 'a' && *ptr <= 'z') {
                arr[*ptr - 'a'] += 1;
            }
        } else {           // This is a space.
            if (inword) {  // The end of a word.
                inword = false;
            }
        }
        ++ptr;
    }
    printf("%d\n", word_cnt);
    for (int i = 0; i < 26; ++i) {
        if (arr[i] > 0) {
            printf("%c : %d\n", i + 'a', arr[i]);
        }
    }
    return 0;
}