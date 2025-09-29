#include <stdio.h>
int main() {
    float principal, rate, payment;
    int months;
    printf("Enter principal, annual rate (%), and months: ");
    scanf("%f %f %d", &principal, &rate, &months);
    if (principal > 0 && rate > 0 && months > 0) {
        payment = (principal * rate / (100 * 12)) / (1 - 1 / (1 + rate / (100 * 12)) * months);
        printf("Monthly payment: %.2f\n", payment);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}