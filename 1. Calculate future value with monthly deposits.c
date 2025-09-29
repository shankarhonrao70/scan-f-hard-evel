#include <stdio.h>
int main() {
    float principal, rate, deposit, total;
    int months;
    printf("Enter initial principal, annual rate (%), monthly deposit, and months: ");
    scanf("%f %f %f %d", &principal, &rate, &deposit, &months);
    total = principal;
    for (int i = 0; i < months; i++) {
        total = total * (1 + rate / (100 * 12)) + deposit;
    }
    printf("Future value: %.2f\n", total);
    return 0;
}