#include <stdio.h>
int main() {
    int b1, b2, b3, b4;
    printf("Enter IP address (four octets): ");
    scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);
    if (b1 >= 0 && b1 <= 255 && b2 >= 0 && b2 <= 255 &&
        b3 >= 0 && b3 <= 255 && b4 >= 0 && b4 <= 255) {
        printf("Valid IP address\n");
    } else {
        printf("Invalid IP address\n");
    }
    return 0;
}