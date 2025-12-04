#include <stdio.h>

int main() {
    float a, b;
    char ans;

    printf("Enter expression like 4+3: ");
    scanf("%f %c %f", &a, &ans, &b);

    switch(ans) {
        case '+': printf("%.2f", a + b); break;
        case '-': printf("%.2f", a - b); break;
        case '*': printf("%.2f", a * b); break;
        case '/':
            if(b != 0) printf("%.2f", a / b);
            else printf("Error! Division by zero.");
            break;
        default: printf("Invalid operator!");
    }
    return 0;
}