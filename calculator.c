#include <stdio.h>

int main(void){
    double num1;
    double num2;
    double total;
    char operand;
    char again;

    while(again != 'n'){
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
            if(num2 == 0){
                printf("Error: Divide by Zero");
                return 1;
            }
            total = num1 / num2;
            break;

            default:
            printf("Invalid operand. ");
            break;
            return 1;
        }
        printf("Total is: %lf\n", total);
        printf("Calculate again? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
