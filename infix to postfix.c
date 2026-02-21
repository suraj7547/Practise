#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100
struct Stack {
    int top;
    unsigned capacity;
    char* array;
};
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack =
        (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array =
        (char*)malloc(stack->capacity * sizeof(char));
    return stack;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
char peek(struct Stack* stack) {
    return stack->array[stack->top];
}
void push(struct Stack* stack, char item) {
    stack->array[++stack->top] = item;
}
char pop(struct Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}
int precedence(char op) {

    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}
int main() {
    int n;
    char exp[MAX_SIZE];
    char postfix[MAX_SIZE];
    int k = 0;
    scanf("%d", &n);
    scanf("%s", exp);
    struct Stack* stack = createStack(n);
    for (int i = 0; i < n; i++) {
        char c = exp[i];
        if (isalnum(c)) {
            postfix[k++] = c;
        }
        else if (c == '(') {
            push(stack, c);
        }
        else if (c == ')') {
            while (!isEmpty(stack) && peek(stack) != '(')
                postfix[k++] = pop(stack);
            pop(stack); 
        }
        else {
            while (!isEmpty(stack) &&
                  (precedence(peek(stack)) > precedence(c) ||
                  (precedence(peek(stack)) == precedence(c) && c != '^')))
            {
                postfix[k++] = pop(stack);
            }
            push(stack, c);
        }
    }
    while (!isEmpty(stack))
        postfix[k++] = pop(stack);
    postfix[k] = '\0';
    printf("%s", postfix);
    return 0;
}
