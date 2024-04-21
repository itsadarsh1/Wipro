//Simple calculator function

#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int substraction(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Cannot divide by zero\n");
        return 0;
    } else {
        return a / b;
    }
}

int main() {
    int num1, num2;
    char operation;

    printf("Operation +, -, *, /: ");
    scanf(" %c", &operation);

    printf("Enter the value of N1 and N2: ");
    scanf("%d %d", &num1, &num2);

    int sum = addition(num1, num2);
    int sub = substraction(num1, num2);
    int mul = multiply(num1, num2);
    float div = divide(num1, num2);

    switch (operation) {
        case '+':
            printf("Sum is %d\n", sum);
            break;
        case '-':
            printf("Subtraction is %d\n", sub);
            break;
        case '*':
            printf("Multiplication is %d\n", mul);
            break;
        case '/':
            printf("Division is %.2f\n", div);
            break;
        default:
            printf("Please Enter + - * 0r / operation\n");
    }

    return 0;
}

