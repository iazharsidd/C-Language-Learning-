#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

struct Stack
{
    int top;
    char items[MAX_SIZE];
};

void initialize(struct Stack *s)
{
    s->top = -1;
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

int isFull(struct Stack *s)
{
    return s->top == MAX_SIZE - 1;
}

void push(struct Stack *s, char item)
{
    if (isFull(s))
    {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    s->items[++(s->top)] = item;
}

char pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return s->items[(s->top)--];
}

int isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

void postfixToInfix(char postfix[], char infix[])
{
    struct Stack stack;
    initialize(&stack);

    int len = strlen(postfix);

    for (int i = 0; i < len; i++)
    {
        if (isalnum(postfix[i]))
        {
            push(&stack, postfix[i]);
        }
        else if (isOperator(postfix[i]))
        {
            char operand2 = pop(&stack);
            char operand1 = pop(&stack);
            sprintf(infix + strlen(infix), "(%c%c%c)", operand1, postfix[i], operand2);
            push(&stack, infix[strlen(infix) - 1]);
        }
    }

    infix[strlen(infix)] = '\0';
}

int main()
{
    char postfix[MAX_SIZE];
    char infix[MAX_SIZE];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    postfixToInfix(postfix, infix);

    printf("Infix expression: %s\n", infix);

    return 0;
}
