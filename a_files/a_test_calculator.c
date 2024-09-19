#include <stdio.h>
#include <stdlib.h>

#define MAX_OPERANDS 100

void add(double operands[], int count) {
    double result = 0.0;
    for (int i = 0; i < count; i++) {
        result += operands[i];
    }
    printf("Result: %.2lf\n", result);
}

void subtract(double operands[], int count) {
    double result = operands[0];
    for (int i = 1; i < count; i++) {
        result -= operands[i];
    }
    printf("Result: %.2lf\n", result);
}

void multiply(double operands[], int count) {
    double result = 1.0;
    for (int i = 0; i < count; i++) {
        result *= operands[i];
    }
    printf("Result: %.2lf\n", result);
}

void divide(double operands[], int count) {
    double result = operands[0];
    for (int i = 1; i < count; i++) {
        if (operands[i] == 0) {
            printf("Error: Division by zero.\n");
            return;
        }
        result /= operands[i];
    }
    printf("Result: %.2lf\n", result);
}

int main() {
    char operator;
    double operands[MAX_OPERANDS];
    int count;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the number of operands: ");
    scanf("%d", &count);

    if (count > MAX_OPERANDS) {
        printf("Error: Too many operands. Maximum allowed is %d.\n", MAX_OPERANDS);
        return 1;
    }

    printf("Enter the operands: ");
    for (int i = 0; i < count; i++) {
        scanf("%lf", &operands[i]);
    }

    switch (operator) {
        case '+':
            add(operands, count);
            break;
        case '-':
            subtract(operands, count);
            break;
        case '*':
            multiply(operands, count);
            break;
        case '/':
            divide(operands, count);
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    return 0;
}
