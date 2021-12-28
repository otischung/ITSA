#include <stdio.h>

int main() {
    int mile;
    double kilo;

    scanf("%d", &mile);
    kilo = (double)mile * 1.6;
    printf("%.1lf\n", kilo);
    return 0;
}
