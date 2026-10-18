
#include <stdio.h>

int main() {
    int n, temp, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative number is not a palindrome\n");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Reverse: %d\n", reverse);

    if (n == reverse)
        printf("%d is a Palindrome Number\n", n);
    else
        printf("%d is not a Palindrome Number\n", n);

    return 0;
}
Enter a number: 121
Reverse: 121
121 is a Palindrome Number
