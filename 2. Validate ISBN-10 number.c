#include <stdio.h>
int main() {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, sum;
    printf("Enter 10-digit ISBN (d1 to d10): ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10);
    sum = d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 5 + d7 * 4 + d8 * 3 + d9 * 2 + d10 * 1;
    if (sum % 11 == 0) {
        printf("Valid ISBN-10\n");
    } else {
        printf("Invalid ISBN-10\n");
    }
    return 0;
}