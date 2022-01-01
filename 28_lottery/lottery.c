#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

char S[16];
char J1[16];
char J2[16];
char J3[16];
int cnt[7];
uint64_t tot;

bool special(char *input) {
    if (!strcmp(S, input)) {
        ++cnt[0];
        return true;
    }
    return false;
}

bool jackpot(char *input) {
    if (!strcmp(J1, input)) {
        ++cnt[1];
        return true;
    }
    if (!strcmp(J2, input)) {
        ++cnt[1];
        return true;
    }
    if (!strcmp(J3, input)) {
        ++cnt[1];
        return true;
    }
    return false;
}

bool second(char *input) {
    char *j, *i;

    i = input + 1;
    j = J1 + 1;
    if (!strcmp(i, j)) {
        ++cnt[2];
        return true;
    }
    j = J2 + 1;
    if (!strcmp(i, j)) {
        ++cnt[2];
        return true;
    }
    j = J3 + 1;
    if (!strcmp(i, j)) {
        ++cnt[2];
        return true;
    }
    return false;
}

bool third(char *input) {
    char *j, *i;

    i = input + 2;
    j = J1 + 2;
    if (!strcmp(i, j)) {
        ++cnt[3];
        return true;
    }
    j = J2 + 2;
    if (!strcmp(i, j)) {
        ++cnt[3];
        return true;
    }
    j = J3 + 2;
    if (!strcmp(i, j)) {
        ++cnt[3];
        return true;
    }
    return false;
}

bool fourth(char *input) {
    char *j, *i;

    i = input + 3;
    j = J1 + 3;
    if (!strcmp(i, j)) {
        ++cnt[4];
        return true;
    }
    j = J2 + 3;
    if (!strcmp(i, j)) {
        ++cnt[4];
        return true;
    }
    j = J3 + 3;
    if (!strcmp(i, j)) {
        ++cnt[4];
        return true;
    }
    return false;
}

bool fifth(char *input) {
    char *j, *i;

    i = input + 4;
    j = J1 + 4;
    if (!strcmp(i, j)) {
        ++cnt[5];
        return true;
    }
    j = J2 + 4;
    if (!strcmp(i, j)) {
        ++cnt[5];
        return true;
    }
    j = J3 + 4;
    if (!strcmp(i, j)) {
        ++cnt[5];
        return true;
    }
    return false;
}

bool sixth(char *input) {
    char *j, *i;

    i = input + 5;
    j = J1 + 5;
    if (!strcmp(i, j)) {
        ++cnt[6];
        return true;
    }
    j = J2 + 5;
    if (!strcmp(i, j)) {
        ++cnt[6];
        return true;
    }
    j = J3 + 5;
    if (!strcmp(i, j)) {
        ++cnt[6];
        return true;
    }
    return false;
}

void checker(char *input) {
    bool yn;

    yn = false;
    yn = special(input);
    if (yn) return;
    yn = jackpot(input);
    if (yn) return;
    yn = second(input);
    if (yn) return;
    yn = third(input);
    if (yn) return;
    yn = fourth(input);
    if (yn) return;
    yn = fifth(input);
    if (yn) return;
    yn = sixth(input);
    if (yn) return;
}

int main() {
    int num;
    char input[16];

    scanf("%15s %15s %15s %15s", S, J1, J2, J3);
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        scanf("%15s", input);
        checker(input);
    }
    for (int i = 0; i < 7; ++i) {
        printf("%d%c", cnt[i], " \n"[i == 6]);
    }
    tot = cnt[0] * 2000000 + cnt[1] * 200000 + cnt[2] * 40000 + cnt[3] * 10000 + cnt[4] * 4000 + cnt[5] * 1000 + cnt[6] * 200;
    printf("%llu\n", tot);
    return 0;
}
