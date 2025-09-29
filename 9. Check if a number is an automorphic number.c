#include <stdio.h>
int main() {
    int num, square, digits = 0, temp, isAuto = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        temp = num;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        square = num * num;
        temp = square;
        while (temp > 0 && digits > 0) {
            if (temp % 10 != num % 10) {
                isAuto = 0;
                break;
            }
            temp /= 10;
            num /= 10;
            digits--;
        }
        if (isAuto) {
            printf("Automorphic number\n");
        } else {
            printf("Not an automorphic number\n");
        }
    } else {
        printf("Invalid input\n");
    }
    return 0;
}