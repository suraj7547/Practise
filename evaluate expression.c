#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_SIZE 100
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
void push(struct Stack* stack, int item) {
    stack->array[++stack->top] = item;
}
int pop(struct Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return -1;
}
int evaluateSuffixExpression(char* suffix) {
    int len = strlen(suffix);
    struct Stack* stack = createStack(len);
    for(int i = 0; i < len; i++) {
        char c = suffix[i];
        if(isdigit(c)) {
            push(stack, c - '0');
        }
        else {
            int b = pop(stack);
            int a = pop(stack);
            int result;
            switch(c) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
                case '^': result = pow(a, b); break;
            }
            push(stack, result);
        }
    }
    return pop(stack);
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char suffix[n];
        scanf("%s", suffix);
        int result = evaluateSuffixExpression(suffix);
        printf("%d\n", result);
    }
}
