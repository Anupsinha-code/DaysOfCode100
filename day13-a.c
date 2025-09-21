#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;
    float divResult;

    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);  

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                divResult = (float)num1 / num2;
                printf("Result: %d / %d = %f\n", num1, num2, divResult);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %.\n");
    }

    return 0;
}
