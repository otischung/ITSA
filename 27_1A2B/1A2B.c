#include <stdio.h>
#include <string.h>

int A(char *ans, char *input) {
    char *aptr, *iptr;
    int cnt;

    aptr = ans;
    iptr = input;
    cnt = 0;

    for (int i = 0; i < 4; ++i) {
        if (*iptr++ == *aptr++) {
            ++cnt;
        }
    }
    return cnt;
}

int B(char *ans, char *input) {
    char *aptr, *iptr;
    int cnt;

    aptr = ans;
    cnt = 0;

    for (int i = 0; i < 4; ++i) {
        iptr = input;
        for (int j = 0; j < 4; ++j) {
            if (i == j) {
                ++iptr;
                continue;
            }
            if (*iptr++ == *aptr) {
                ++cnt;
            }
        }
        ++aptr;
    }
    return cnt;
}

int main() {
    char ans[8], input[8];
    scanf("%7s", ans);
    while (1) {
        scanf("%7s", input);
        if (!strcmp("0000", input)) {
            break;
        }
        printf("%dA%dB\n", A(ans, input), B(ans, input));
    }
    return 0;
}
