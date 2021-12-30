#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input[4096];
    char *front, *end;
    bool yn;
    fgets(input, 4096, stdin);
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] =  '\0';
    }
    front = input;
    end = input + strlen(input) - 1;
    yn = true;
    while (front <= end) {
        if (*front++ != *end--) {
            yn = false;
            printf("NO\n");
            break;
        }
    }
    if (yn) {
        printf("YES\n");
    }
    return 0;
}
