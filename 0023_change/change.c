#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[1024];
    char *ptr, *saveptr;
    char delm[] = ",";
    int total, apple, orange, peach, change;
    int c50, c5, c1;

    scanf("%s", input);
    ptr = input;
    ptr = strtok_r(ptr, delm, &saveptr);
    total = atoi(ptr);
    ptr = strtok_r(NULL, delm, &saveptr);
    apple = atoi(ptr);
    ptr = strtok_r(NULL, delm, &saveptr);
    orange = atoi(ptr);
    ptr = strtok_r(NULL, delm, &saveptr);
    peach = atoi(ptr);


    change = total - (apple * 15 + orange * 20 + peach * 30);
    if (change < 0) {
        printf("0\n");
        return 0;
    }
    c50 = change / 50;
    change -= c50 * 50;
    c5 = change / 5;
    change -= c5 * 5;
    c1 = change;
    printf("%d,%d,%d\n", c1, c5, c50);
    return 0;
}
