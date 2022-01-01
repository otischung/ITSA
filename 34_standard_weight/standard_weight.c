#include <stdio.h>

int main() {
    int height, gender;

    while (~scanf("%d %d", &height, &gender)) {
        switch (gender) {
            case 1:
                printf("%.01lf\n", (double)(height - 80) * 0.7);
                break;
            case 2:
                printf("%.01lf\n", (double)(height - 70) * 0.6);
                break;
            default:
                break;
        }
    }
    return 0;
}
