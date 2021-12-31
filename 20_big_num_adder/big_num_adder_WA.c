#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[64], b[64], s[64];
    char *aptr, *bptr, *sptr;
    uint32_t n;
    uint8_t x, y, c;
    uint8_t a_len, b_len;

    scanf("%u", &n);
    for (uint32_t i = 0; i < n; ++i) {
        memset(s, '\0', 64 * sizeof(char));
        scanf("%s %s", a, b);
        a_len = strlen(a);
        b_len = strlen(b);
        // a_len >= b_len ? sptr = s + a_len : sptr = s + b_len;
        if (a_len >= b_len) {
            sptr = s + a_len;
        } else {
            sptr = s + b_len;
        }

        c = 0;
        aptr = a + a_len - 1;
        bptr = b + b_len - 1;
        while (aptr >= a && bptr >= b) {
            x = *aptr - '0';
            y = *bptr - '0';
            *sptr = (char)(x + y + c);
            c = *sptr / 10;
            *sptr %= 10;
            *sptr += '0';
            --aptr;
            --bptr;
            --sptr;
        }
        while (aptr >= a) {
            x = *aptr - '0';
            *sptr = (char)(x + c);
            c = 0;
            *sptr %= 10;
            *sptr += '0';
            --aptr;
            --sptr;
        }
        while (bptr >= b) {
            y = *bptr - '0';
            *sptr = (char)(y + c);
            c = 0;
            *sptr %= 10;
            *sptr += '0';
            --bptr;
            --sptr;
        }
        *sptr = (char)c;
        *sptr += '0';
        sptr = s;
        if (*sptr == '\0') {
            while (*sptr++ != '\0');
        }
        if (*sptr == '0') {
            while (*sptr++ != '0');
        }
        printf("%s\n", sptr);
    }
    return 0;
}
