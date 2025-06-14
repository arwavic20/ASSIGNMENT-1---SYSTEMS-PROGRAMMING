#include <stdio.h>

int main() {
    double number1, number2;
    char operator;

    printf("CALCULATOR APP IN C\n");

    printf("USE: [FIRST NUMBER] [OPERATOR] [SECOND NUMBER]\n");

    printf("Enter your calculation: ");

    scanf("%lf %c %lf", &number1, &operator, &number2);

    switch(operator) {
        case '+':
            printf("Result: %.2lf\n", number1 + number2);
            break;
        case '-':
            printf("Result: %.2lf\n", number1 - number2);
            break;
        case '*':
            printf("Result: %.2lf\n", number1 * number2);
            break;
        case '/':
            if (number2 != 0)
                printf("Result: %.2lf\n", number1 / number2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Error: You entered an invalid operator.\n");
    }

    return 0;
}
