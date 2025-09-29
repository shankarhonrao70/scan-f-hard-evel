#include <stdio.h>
int main() {
    float initial, rate1, rate2, rate3, total;
    int years1, years2, years3;
    printf("Enter initial amount, rate1, years1, rate2, years2, rate3, years3: ");
    scanf("%f %f %d %f %d %f %d", &initial, &rate1, &years1, &rate2, &years2, &rate3, &years3);
    if (initial > 0 && years1 > 0 && years2 > 0 && years3 > 0) {
        total = initial;
        for (int i = 0; i < years1; i++) total *= (1 + rate1 / 100);
        for (int i = 0; i < years2; i++) total *= (1 + rate2 / 100);
        for (int i = 0; i < years3; i++) total *= (1 + rate3 / 100);
        printf("Total return: %.2f\n", total - initial);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}