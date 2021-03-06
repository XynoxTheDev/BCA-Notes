#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct stack{
    int top;
    unsigned capacity;
    int *array;
};

struct stack *create_stack(unsigned capacity){
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    if(!stack) return NULL;
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    if(!stack->array)return NULL;
    return stack;
}

int isEmpty(struct stack *stack){
    return stack->top == -1;
}

char peek(struct stack *stack){
    return stack->array[stack->top];
}

char pop(struct stack *stack){
    if(!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}

void push(struct stack *stack, char op){
    stack->array[++stack->top] = op;
}

int evaluatePostfix(char *exp){
    struct stack *stack = create_stack(strlen(exp));
    int i;
    if(!stack)return -1;

    for(i=0; exp[i]; ++i){
        if(isdigit(exp[i]))
            push(stack, exp[i]-'0');
        else{
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch(exp[i]){
                case '+': push(stack, val2 + val1); break;
                case '-': push(stack, val2 - val1); break;
                case '*': push(stack, val2 * val1); break;
                case '/': push(stack, val2 / val1); break;
            }
        }
    }
    return pop(stack);
}

int main(){
    char *exp = "53+82-*";
    printf("Postfix evaluation: %d\n", evaluatePostfix(exp));
}
