#include <stdio.h>

int main() {
    int n;
    long long fact = 1;
//multiply by each number until it turns 1
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
 printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}