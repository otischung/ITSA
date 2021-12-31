#include <stdio.h>

int main() {
    long double r, tot;
    int n, p;

    scanf("%llf %d %d", &r, &n, &p);
    tot = 0.0;
    for (int i = 0; i < n; ++i) {
        tot += (long double)p;
        tot *= (1 + r);
    }
    printf("%.0llf\n", tot);
    return 0;
}
