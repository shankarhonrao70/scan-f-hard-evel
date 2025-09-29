#include <stdio.h>
int main() {
    float temp1, temp2, temp3, avg;
    printf("Enter three temperatures: ");
    scanf("%f %f %f", &temp1, &temp2, &temp3);
    if (temp1 >= -273.15 && temp2 >= -273.15 && temp3 >= -273.15) {
        avg = (temp1 + temp2 + temp3) / 3;
        printf("Average temperature: %.2f\n", avg);
    } else {
        printf("Invalid temperature (below absolute zero)\n");
    }
    return 0;
}