#include <stdio.h>


void Push(double stack[], int *top, double num){
    stack[*top] = num;
    (*top)++;
}

double Pop(double stack[], int *top){
    (*top)--;
    return stack[*top];
}
