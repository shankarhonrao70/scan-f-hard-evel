#include <stdio.h>
int main() {
    float initial, rate, value;
    int periods;
    printf("Enter initial value, growth rate (%), and periods: ");
    scanf("%f %f %d", &initial, &rate, &periods);
    if (initial > 0 && rate >= 0 && periods > 0) {
        value = initial;
        for (int i = 0; i < periods; i++) {
            value = value * (1 + rate / 100);
        }
        printf("Final value: %.2f\n", value);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}