#include <stdio.h>
int main()
 {
    float value, rate, depreciated;
    int years;
    printf("Enter initial value, depreciation rate (%), and years: ");
    scanf("%f %f %d", &value, &rate, &years);
    depreciated = value;
    for (int i = 0; i < years; i++) {
        depreciated = depreciated * (1 - rate / 100);
    }
    printf("Depreciated value: %.2f\n", depreciated);
    return 0;
}