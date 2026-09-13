#include <stdio.h>

double GetDoubleInput(char *prompt){
    double num;
    while(1){
        printf("%s", prompt);
        if(scanf("%lf", &num) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');

            continue;
        }
        return num;
    }

}

double Calculate(double num1, double num2, char operand){
    double total = 0;
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
            printf("Error: Divide by Zero\n");
            break;
        }

        total = num1 / num2;
        break;

        default:
        printf("Invalid operand. ");
        return 1;
    }
    return total;
}

int main(void){
    double num1;
    double num2;
    double total;
    char operand;
    char again = 'y';

    while(again != 'n'){
        num1 = GetDoubleInput("Enter the first number: ");
        num2 = GetDoubleInput("Enter the second number: ");
        printf("Enter the operand(+, -, *, /): ");
        scanf(" %c", &operand);

        total = Calculate(num1, num2, operand);

        printf("Total is: %lf\n", total);
        printf("Calculate again? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
