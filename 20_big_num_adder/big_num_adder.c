#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define POSITIVE 0
#define NEGATIVE 1

int main() {
    uint32_t cnt;
    char a[1024], b[1024], s[1024];  // support 1020 digits.
    char as[18], bs[18];             // s: split
    char *aptr, *bptr, *aqtr, *bqtr, *asptr, *bsptr;
    bool asign, bsign, swap;
    int64_t x[60], y[60], sum[60];  // split the digits into 60 pieces, each has 17 digits.
    int8_t c;
    bool error, format;

    scanf("%u", &cnt);
    for (int i = 0; i < cnt; ++i) {
        error = false;
        scanf("%1023s %1023s", a, b);
        aptr = a + 1;
        bptr = b + 1;
        // format check
        if (!isdigit(a[0]) && a[0] != '+' && a[0] != '-') {
            fprintf(stderr, "format error\n");
            error = true;
        }
        if (!isdigit(b[0]) && b[0] != '+' && b[0] != '-') {
            fprintf(stderr, "format error\n");
            error = true;
        }
        while (*aptr) {
            if (!isdigit(*aptr++)) {
                fprintf(stderr, "format error\n");
                error = true;
                break;
            }
        }
        while (*bptr) {
            if (!isdigit(*bptr++)) {
                fprintf(stderr, "format error\n");
                error = true;
                break;
            }
        }
        if (error) {
            continue;
        }
        // clear the leading zeros
        // detect negative value
        asign = POSITIVE;
        bsign = POSITIVE;
        if (a[0] == '-') {
            asign = NEGATIVE;
            a[0] = '0';
        }
        if (b[0] == '-') {
            bsign = NEGATIVE;
            b[0] = '0';
        }
        aptr = a;
        bptr = b;
        aqtr = aptr;
        bqtr = bptr;
        while (*aptr == '0') {
            ++aptr;
        }
        while (*aptr) {
            *aqtr++ = *aptr++;
        }
        *aqtr = '\0';
        while (*bptr == '0') {
            ++bptr;
        }
        while (*bptr) {
            *bqtr++ = *bptr++;
        }
        *bqtr = '\0';
        // compare the absolute value, assign larger value to a
        aptr = a;
        bptr = b;
        format = true;
        if (strlen(a) < strlen(b)) {
            format = false;
        }
        if (strlen(a) == strlen(b)) {
            while (*aptr) {
                if (*aptr++ < *bptr++) {
                    format = false;
                    break;
                }
            }
        }
        if (!format) {
            strcpy(s, a);
            strcpy(a, b);
            strcpy(b, s);
            swap = asign;
            asign = bsign;
            bsign = swap;
            memset(s, '\0', 1024 * sizeof(char));
        }
        // perform atoll
        aptr = a + strlen(a) - 1;
        bptr = b + strlen(b) - 1;
        for (int i = 59; i >= 0; --i) {
            asptr = as + 17;
            bsptr = bs + 17;
            *asptr-- = '\0';
            *bsptr-- = '\0';
            while (aptr >= a && asptr >= as) {
                *asptr-- = *aptr--;
            }
            while (asptr >= as) {
                *asptr-- = '0';
            }
            x[i] = atoll(as);
            while (bptr >= b && bsptr >= bs) {
                *bsptr-- = *bptr--;
            }
            while (bsptr >= bs) {
                *bsptr-- = '0';
            }
            y[i] = atoll(bs);
        }
        // test
        printf("%c%s\n%c%s\n", "+-"[asign], a, "+-"[bsign], b);
        // test
        if (asign) putchar('-');
        else putchar('+');
        for (int i = 0; i < 60; ++i) {
            if (x[i] != 0) printf("%017lld", x[i]);
        }
        putchar('\n');
        if (bsign) putchar('-');
        else putchar('+');
        for (int i = 0; i < 60; ++i) {
            if (y[i] != 0) printf("%017lld", y[i]);
        }
        putchar('\n');
        // decide to add or to substract
        if (asign == bsign) {  // ADD
        } else {               // SUB
        }
    }
    return 0;
}