#include <stdio.h>
int main() {
    int regHours, otHours, totalHours;
    float regRate, otRate, totalPay;
    printf("Enter regular hours, overtime hours, regular rate, overtime rate: ");
    scanf("%d %d %f %f", &regHours, &otHours, &regRate, &otRate);
    if (regHours >= 0 && otHours >= 0 && regRate > 0 && otRate > 0) {
        totalHours = regHours + otHours;
        if (regHours > 40) {
            totalPay = 40 * regRate + (regHours - 40 + otHours) * otRate;
        } else {
            totalPay = regHours * regRate + otHours * otRate;
        }
        printf("Total pay: %.2f\n", totalPay);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}