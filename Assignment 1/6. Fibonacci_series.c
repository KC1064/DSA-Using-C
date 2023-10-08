//WAP to print fibonacci series upto n terms.
#include <stdio.h>
int main() {
    int n, i, a = 0, b = 1, next_term;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: ");
    for (i = 1; i <= n; i++) {
        printf("%d, ", a);
        next_term = a + b;
        a = b;
        b = next_term;
    }
    return 0;
}
