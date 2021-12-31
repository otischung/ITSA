#include <stdio.h>
#include <stdint.h>

typedef struct NUMBER {
    char asterisk[5][5];
} Number;

int main() {
    uint32_t num;
    uint8_t a, b, c, d, i, j;
    Number n[10];

    scanf("%u", &num);
    d = num % 10;
    num /= 10;
    c = num % 10;
    num /= 10;
    b = num % 10;
    num /= 10;
    a = num;

    n[0].asterisk[0][0] = '*';
    n[0].asterisk[0][1] = '*';
    n[0].asterisk[0][2] = '*';
    n[0].asterisk[0][3] = '*';
    n[0].asterisk[0][4] = '*';

    n[0].asterisk[1][0] = '*';
    n[0].asterisk[1][1] = ' ';
    n[0].asterisk[1][2] = ' ';
    n[0].asterisk[1][3] = ' ';
    n[0].asterisk[1][4] = '*';

    n[0].asterisk[2][0] = '*';
    n[0].asterisk[2][1] = ' ';
    n[0].asterisk[2][2] = ' ';
    n[0].asterisk[2][3] = ' ';
    n[0].asterisk[2][4] = '*';

    n[0].asterisk[3][0] = '*';
    n[0].asterisk[3][1] = ' ';
    n[0].asterisk[3][2] = ' ';
    n[0].asterisk[3][3] = ' ';
    n[0].asterisk[3][4] = '*';

    n[0].asterisk[4][0] = '*';
    n[0].asterisk[4][1] = '*';
    n[0].asterisk[4][2] = '*';
    n[0].asterisk[4][3] = '*';
    n[0].asterisk[4][4] = '*';

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 4; ++j) {
            n[1].asterisk[i][j] = ' ';
        }
    }

    for (i = 0; i < 5; ++i) {
        n[1].asterisk[i][4] = '*';
    }

    for (i = 0; i < 5; i += 2) {
        for (j = 0; j < 5; ++j) {
            n[2].asterisk[i][j] = '*';
        }
    }

    for (i = 0; i < 4; ++i) {
        n[2].asterisk[1][i] = ' ';
        n[2].asterisk[3][i + 1] = ' ';
    }
    n[2].asterisk[1][4] = '*';
    n[2].asterisk[3][0] = '*';

    for (i = 0; i < 5; i += 2) {
        for (j = 0; j < 5; ++j) {
            n[3].asterisk[i][j] = '*';
        }
    }

    for (i = 0; i < 4; ++i) {
        n[3].asterisk[1][i] = ' ';
        n[3].asterisk[3][i] = ' ';
    }
    n[3].asterisk[1][4] = '*';
    n[3].asterisk[3][4] = '*';

    n[4].asterisk[0][0] = '*';
    n[4].asterisk[0][1] = ' ';
    n[4].asterisk[0][2] = ' ';
    n[4].asterisk[0][3] = ' ';
    n[4].asterisk[0][4] = '*';

    n[4].asterisk[1][0] = '*';
    n[4].asterisk[1][1] = ' ';
    n[4].asterisk[1][2] = ' ';
    n[4].asterisk[1][3] = ' ';
    n[4].asterisk[1][4] = '*';

    for (i = 0; i < 5; ++i) {
        n[4].asterisk[2][i] = '*';
    }
    for (i = 3; i < 5; ++i) {
        for (j = 0; j < 4; ++j) {
            n[4].asterisk[i][j] = ' ';
        }
    }
    n[4].asterisk[3][4] = '*';
    n[4].asterisk[4][4] = '*';

    for (i = 0; i < 5; i += 2) {
        for (j = 0; j < 5; ++j) {
            n[5].asterisk[i][j] = '*';
        }
    }

    for (i = 0; i < 4; ++i) {
        n[5].asterisk[1][i + 1] = ' ';
        n[5].asterisk[3][i] = ' ';
    }
    n[5].asterisk[1][0] = '*';
    n[5].asterisk[3][4] = '*';

    for (i = 0; i < 5; i += 2) {
        for (j = 0; j < 5; ++j) {
            n[6].asterisk[i][j] = '*';
        }
    }

    for (i = 0; i < 4; ++i) {
        n[6].asterisk[1][i + 1] = ' ';
        n[6].asterisk[3][i] = ' ';
    }
    n[6].asterisk[1][0] = '*';
    n[6].asterisk[3][0] = '*';
    n[6].asterisk[3][4] = '*';

    for (i = 0; i < 5; ++i) {
        n[7].asterisk[0][i] = '*';
    }
    for (i = 1; i < 5; ++i) {
        n[7].asterisk[i][4] = '*';
    }
    for (i = 1; i < 5; ++i) {
        for (j = 0; j < 4; ++j) {
            n[7].asterisk[i][j] = ' ';
        }
    }

    for (i = 0; i < 5; i += 2) {
        for (j = 0; j < 5; ++j) {
            n[8].asterisk[i][j] = '*';
        }
    }

    for (i = 1; i < 4; ++i) {
        n[8].asterisk[1][i] = ' ';
        n[8].asterisk[3][i] = ' ';
    }
    n[8].asterisk[1][0] = '*';
    n[8].asterisk[3][0] = '*';
    n[8].asterisk[1][4] = '*';
    n[8].asterisk[3][4] = '*';

    for (i = 0; i < 5; i += 2) {
        for (j = 0; j < 5; ++j) {
            n[9].asterisk[i][j] = '*';
        }
    }

    for (i = 1; i < 4; ++i) {
        n[9].asterisk[1][i] = ' ';
        n[9].asterisk[3][i] = ' ';
    }
    n[9].asterisk[1][0] = '*';
    n[9].asterisk[3][0] = ' ';
    n[9].asterisk[1][4] = '*';
    n[9].asterisk[3][4] = '*';

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            putchar(n[a].asterisk[i][j]);
        }
        putchar(' ');
        for (j = 0; j < 5; ++j) {
            putchar(n[b].asterisk[i][j]);
        }
        putchar(' ');
        for (j = 0; j < 5; ++j) {
            putchar(n[c].asterisk[i][j]);
        }
        putchar(' ');
        for (j = 0; j < 5; ++j) {
            putchar(n[d].asterisk[i][j]);
        }
        putchar('\n');
    }
    
    return 0;
}
