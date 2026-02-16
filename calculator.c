#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1;
    double num2;
    char op;

    printf("Enter your first number: ");
    scanf("%lf", &num1); //%lf - ใส่ double value
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter your second number: ");
    scanf("%lf", &num2);

    //Single Quote For Compare Only
    if (op == '+') {
    printf("Answer: %f", num1 + num2);
    } else if (op == '-') {
    printf("Answer: %f", num1 - num2);
    } else if (op == '*') {
    printf("Answer: %f", num1 * num2);
    } else if (op == '/') {
    printf("Answer: %f", num1 / num2);
    } else {
    printf("Invalid Operator");
    }

    return 0;
}