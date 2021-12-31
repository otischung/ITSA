#include <stdbool.h>
#include <stdio.h>

int main() {
    bool first;
    double input, max, min;

    first = false;
    while (~scanf("%lf", &input)) {
        if (!first) {
            first = true;
            max = input;
            min = input;
        } else {
            if (max < input) {
                max = input;
            }
            if (min > input) {
                min = input;
            }
        }
    }
    printf("maximum:%.02lf\n", max);
    printf("minimum:%.02lf\n", min);
}
