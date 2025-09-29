#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    int len, i, isPal = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPal = 0;
            break;
        }
    }
    if (isPal) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}