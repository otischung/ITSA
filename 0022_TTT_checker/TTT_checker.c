#include <stdbool.h>
#include <stdio.h>

int main() {
    int input;
    bool chess[3][3];
    bool win;

    win = false;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &input);
            chess[i][j] = (bool)input;
        }
    }
    for (int i = 0; i < 3; ++i) {
        if (chess[0][i] == chess[1][i] && chess[1][i] == chess[2][i]) {  // col. match
            win = true;
            break;
        }
        if (chess[i][0] == chess[i][1] && chess[i][1] == chess[i][2]) {  // row match
            win = true;
            break;
        }
    }
    if (chess[0][0] == chess[1][1] && chess[1][1] == chess[2][2]) {
        win = true;
    }
    if (chess[0][2] == chess[1][1] && chess[1][1] == chess[2][0]) {
        win = true;
    }

    if (win) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
