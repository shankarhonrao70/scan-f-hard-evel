#include <stdio.h>
int main() {
    float presentValue, rate, payment;
    int periods;
    printf("Enter present value, annual rate (%), and number of periods: ");
    scanf("%f %f %d", &presentValue, &rate, &periods);
    if (presentValue > 0 && rate > 0 && periods > 0) {
        payment = (presentValue * rate / (100 * 12)) / (1 - 1 / (1 + rate / (100 * 12)) * periods);
        printf("Annuity payment: %.2f\n", payment);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}