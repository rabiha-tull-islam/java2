#include <stdio.h>
int main() {
    char op;
    double first, second;
    double result;
   	printf("Enter First operand: ");
	scanf("%lf", &first);
    printf("Enter Second operands: ");
    scanf("%lf", &second);
    printf("Enter an operator (+, -, *,): ");
    scanf("%s", &op);
    switch (op) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}

