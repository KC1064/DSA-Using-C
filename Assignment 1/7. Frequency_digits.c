//WAP to calculate the frequency of the digits in a number.
#include <stdio.h>
int main() {
    int number, digit, frequency[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        digit = number % 10;
        frequency[digit]++;
        number /= 10;
    }
    printf("Frequency of digits:\n");
    for (digit = 0; digit < 10; digit++) {
        printf("%d: %d\n", digit, frequency[digit]);
    }
    return 0;
}