#include <stdio.h>
int main() {
    float basic, hra, da, bonus, total;
    printf("Enter basic salary, HRA, DA, and bonus: ");
    scanf("%f %f %f %f", &basic, &hra, &da, &bonus);
    if (basic > 0) {
        total = basic + hra + da;
        if (total > 50000) {
            total += bonus * 1.5;
        } else {
            total += bonus;
        }
        printf("Total salary: %.2f\n", total);
    } else {
        printf("Invalid basic salary\n");
    }
    return 0;
}