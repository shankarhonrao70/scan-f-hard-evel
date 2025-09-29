#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b)) {
        printf("Pythagorean triplet\n");
    } else {
        printf("Not a Pythagorean triplet\n");
    }
    return 0;
}