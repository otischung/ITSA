#include <stdio.h>

int main() {
    char input[10];
    int output[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%c ", &input[i]);
        if (input[i] == 'X') {
            output[i] = 10;
        } else {
            output[i] = (int)(input[i] - '0');
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 1; j < 10; ++j) {
            output[j] += output[j - 1];
        }
    }
    if (output[9] % 11 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
