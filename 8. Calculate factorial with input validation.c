#include <stdio.h>
int main() {
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Invalid input\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial: %d\n", fact);
    }
    return 0;
}