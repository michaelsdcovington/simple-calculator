#include <stdio.h>

int main(void){
    double num1;
    double num2;
    double total;
    char operand;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operand(+, -, *, /): ");
    scanf(" %c", &operand);

    switch(operand){
        case '+':
        total = num1 + num2;
        break;

        case '-':
        total = num1 - num2;
        break;

        case '*':
        total = num1 * num2;
        break;

        case '/':
        total = num1 / num2;
        break;
    }
    printf("Total is: %lf\n", total);

    return 0;
}
