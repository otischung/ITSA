#include <stdio.h>
#include <stdlib.h>

int main() {
    int col, row;
    int **arr;

    while (~scanf("%d %d", &col, &row)) {
        arr = (int **)calloc(col, sizeof(int *));
        for (int i = 0; i < col; ++i) {
            arr[i] = (int *)calloc(row, sizeof(int));
        }

        for (int i = 0; i < col; ++i) {
            for (int j = 0; j < row; ++j) {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                printf("%d%c", arr[j][i], " \n"[j == col - 1]);
            }
        }

        for (int i = 0; i < col; ++i) {
            free(arr[i]);
        }
        free(arr);
    }
    return 0;
}
