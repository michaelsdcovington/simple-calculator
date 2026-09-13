#include <stdio.h>

int GetDoubleInput(char *prompt){
    double num;
    while(1){
        printf("%s", prompt);
        if(scanf("%lf", &num) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');

            continue;
        }
        break;
        return num;
    }

}

int main(void){
    double num1;
    double num2;
    double total;
    char operand;
    char again;

    while(again != 'n'){
        num1 = GetDoubleInput("Enter the first number: ");
        num2 = GetDoubleInput("Enter the second number: ");
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
    }
    return 0;
}
