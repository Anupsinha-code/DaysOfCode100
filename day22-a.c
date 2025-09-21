#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, sum = 0;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    original = num;

    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    
    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is not a Strong Number.\n", original);
    }

    return 0;
}
