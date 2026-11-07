#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user for the arithmetic operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover newline characters

    // Prompt user for two operands
    printf("Enter two numbers separated by a space: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '/':
            // Error handling for division by zero
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}
