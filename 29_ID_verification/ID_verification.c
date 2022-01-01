#include <stdint.h>
#include <stdio.h>

int main() {
    char ID[16];
    uint16_t a, b, sum;

    scanf("%15s", ID);
    switch (ID[0]) {
        case 'A':
            a = 1;
            b = 0;
            break;
        case 'B':
            a = 1;
            b = 1;
            break;
        case 'C':
            a = 1;
            b = 2;
            break;
        case 'D':
            a = 1;
            b = 3;
            break;
        case 'E':
            a = 1;
            b = 4;
            break;
        case 'F':
            a = 1;
            b = 5;
            break;
        case 'G':
            a = 1;
            b = 6;
            break;
        case 'H':
            a = 1;
            b = 7;
            break;
        case 'J':
            a = 1;
            b = 8;
            break;
        case 'K':
            a = 1;
            b = 9;
            break;
        case 'L':
            a = 2;
            b = 0;
            break;
        case 'M':
            a = 2;
            b = 1;
            break;
        case 'N':
            a = 2;
            b = 2;
            break;
        case 'P':
            a = 2;
            b = 3;
            break;
        case 'Q':
            a = 2;
            b = 4;
            break;
        case 'R':
            a = 2;
            b = 5;
            break;
        case 'S':
            a = 2;
            b = 6;
            break;
        case 'T':
            a = 2;
            b = 7;
            break;
        case 'U':
            a = 2;
            b = 8;
            break;
        case 'V':
            a = 2;
            b = 9;
            break;
        case 'X':
            a = 3;
            b = 0;
            break;
        case 'Y':
            a = 3;
            b = 1;
            break;
        case 'W':
            a = 3;
            b = 2;
            break;
        case 'Z':
            a = 3;
            b = 3;
            break;
        case 'I':
            a = 3;
            b = 4;
            break;
        case 'O':
            a = 3;
            b = 5;
            break;
        default:
            break;
    }
    sum = a + 9 * b + 8 * (ID[1] - '0') + 7 * (ID[2] - '0') + 6 * (ID[3] - '0') + 5 * (ID[4] - '0') + 4 * (ID[5] - '0') + 3 * (ID[6] - '0') + 2 * (ID[7] - '0') + ID[8] - '0' + ID[9] - '0';
    if (sum % 10 == 0) {
        printf("CORRECT!!!\n");
    } else {
        printf("WRONG!!!\n");
    }
    return 0;
}
