#include <stdio.h>
int main() {
    int num, n, isCullen = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        for (n = 1; n <= 100; n++) {
            int cullen = n * (1 << n) + 1; // Approximate 2^n with bit shift
            if (cullen == num) {
                isCullen = 1;
                break;
            }
        }
        if (isCullen) {
            printf("Cullen number\n");
        } else {
            printf("Not a Cullen number\n");
        }
    } else {
        printf("Invalid input\n");
    }
    return 0;
}