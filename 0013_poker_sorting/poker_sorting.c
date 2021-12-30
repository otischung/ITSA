#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(uint8_t *)a - *(uint8_t *)b;
}

int main() {
    int row;
    int num;
    char suits;
    char buf[4096];
    char numbuf[4096];
    char token[] = " ";
    char *ptr, *qtr, *saveptr;
    uint8_t S[13];
    uint8_t H[13];
    uint8_t D[13];
    uint8_t C[13];
    uint8_t n_S, n_H, n_D, n_C;

    scanf("%d", &row);
    // scanf("%*[^\n]");
    // scanf("%*[\n]");
    getchar();
    for (int i = 0; i < row; ++i) {
        n_S = 0;
        n_H = 0;
        n_D = 0;
        n_C = 0;
        ptr = fgets(buf, 4096, stdin);
        if (ptr == NULL) break;
        ptr = strtok_r(buf, token, &saveptr);
        while (ptr != NULL) {
            suits = *ptr++;
            qtr = numbuf;
            memset(numbuf, '\0', 4096 * sizeof(char));
            while (*ptr >= '0' && *ptr <='9') {
                *qtr++ = *ptr++;
            }
            num = atoi(numbuf);
            memset(numbuf, '\0', 4096 * sizeof(char));
            switch (suits) {
                case 'S':
                    S[n_S++] = (uint8_t)num;
                    break;
                case 'H':
                    H[n_H++] = (uint8_t)num;
                    break;
                case 'D':
                    D[n_D++] = (uint8_t)num;
                    break;
                case 'C':
                    C[n_C++] = (uint8_t)num;
                    break;
                default:
                    break;
            }
            ptr = strtok_r(NULL, token, &saveptr);
        }

        qsort(S, n_S, sizeof(S[0]), cmp);
        qsort(H, n_H, sizeof(H[0]), cmp);
        qsort(D, n_D, sizeof(D[0]), cmp);
        qsort(C, n_C, sizeof(C[0]), cmp);
        buf[0] = '\0';
        for (int i = n_S - 1; i >= 0; --i) {
            sprintf(numbuf, "S%d ", S[i]);
            strncat(buf, numbuf, 4096);
        }
        for (int i = n_H - 1; i >= 0; --i) {
            sprintf(numbuf, "H%d ", H[i]);
            strncat(buf, numbuf, 4096);
        }
        for (int i = n_D - 1; i >= 0; --i) {
            sprintf(numbuf, "D%d ", D[i]);
            strncat(buf, numbuf, 4096);
        }
        for (int i = n_C - 1; i >= 0; --i) {
            sprintf(numbuf, "C%d ", C[i]);
            strncat(buf, numbuf, 4096);
        }
        buf[strlen(buf) - 1] = '\n';
        buf[strlen(buf)] = '\0';
        printf("%s", buf);
    }
    return 0;
}
