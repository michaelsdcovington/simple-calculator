#include <stdio.h>
#include <stdlib.h>

double Calculate(double num1, double num2, char operand, int *success){
    double total = 0;
    *success = 1;
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
            *success = 0;
            break;
        }

        total = num1 / num2;
        break;

        default:
        printf("Invalid operand. ");
        *success = 0;
    }
    return total;
}

void Push(double stack[], int *top, double num){
    stack[*top] = num;
    (*top)++;
}

double Pop(double stack[], int *top){
    (*top)--;
    return stack[*top];
}

int main(){
    double stack[500];
    int top = 0;
    char token[20];
    double result = 0;
    int isGood;
    printf("Enter a value, operator (+, -, *, /), or q to quit: ");
    while(scanf("%s", token) == 1){
        if(token[0] == 'q'){
            break;
        }
        else if((token[0] == '+') || (token[0] == '-') || (token[0] == '*') || (token[0] == '/')){
            double b = Pop(stack, &top);
            double a = Pop(stack, &top);
            result = Calculate(a, b, token[0], &isGood);
            Push(stack, &top, result);
        }
        else{
            double num = atof(token);
            Push(stack, &top, num);
        }

    }
    printf("Total is: %lf\n", Pop(stack, &top));

    return 0;
}
