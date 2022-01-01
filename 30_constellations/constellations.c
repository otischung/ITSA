#include <stdio.h>

int main() {
    int mon, day;

    scanf("%d %d", &mon, &day);
    switch (mon) {
        case 1:
            if (day <= 20) {
                printf("Capricorn\n");
            } else {
                printf("Aquarius\n");
            }
            break;
        case 2:
            if (day <= 18) {
                printf("Aquarius\n");
            } else {
                printf("Pisces\n");
            }
            break;
        case 3:
            if (day <= 20) {
                printf("Pisces\n");
            } else {
                printf("Aries\n");
            }
            break;
        case 4:
            if (day <= 20) {
                printf("Aries\n");
            } else {
                printf("Taurus\n");
            }
            break;
        case 5:
            if (day <= 21) {
                printf("Taurus\n");
            } else {
                printf("Gemini\n");
            }
            break;
        case 6:
            if (day <= 21) {
                printf("Gemini\n");
            } else {
                printf("Cancer\n");
            }
            break;
        case 7:
            if (day <= 22) {
                printf("Cancer\n");
            } else {
                printf("Leo\n");
            }
            break;
        case 8:
            if (day <= 23) {
                printf("Leo\n");
            } else {
                printf("Virgo\n");
            }
            break;
        case 9:
            if (day <= 23) {
                printf("Virgo\n");
            } else {
                printf("Libra\n");
            }
            break;
        case 10:
            if (day <= 23) {
                printf("Libra\n");
            } else {
                printf("Scorpio\n");
            }
            break;
        case 11:
            if (day <= 22) {
                printf("Scorpio\n");
            } else {
                printf("Sagittarius\n");
            }
            break;
        case 12:
            if (day <= 21) {
                printf("Sagittarius\n");
            } else {
                printf("Capricorn\n");
            }
            break;
        default:
            break;
    }
    return 0;
}
