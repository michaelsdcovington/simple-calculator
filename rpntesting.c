#include <stdio.h>
#include <stdlib.h>


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
        }
        else{
            double num = atof(token);
            Push(stack, &top, num);
        }

    }
    printf("Total is: %lf\n", Pop(stack, &top));

    return 0;
}
