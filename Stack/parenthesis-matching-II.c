#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));

    if (t == NULL)
        printf("Stack overflow\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    struct Node *t;
    char x = -1;

    if (top == NULL)
        printf("Stack underflow\n");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }

    return x;
}

int isEmpty()
{
    return top ? 0 : 1;
}

char stackTop()
{
    if (!isEmpty())
        return top->data;
    return -1;
}

int isBalanced(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            push(exp[i]);
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (isEmpty())
                return 0;

            if (stackTop() == '(' && exp[i] == ')')
                pop();
            else if (stackTop() == '[' && exp[i] == ']')
                pop();
            else if (stackTop() == '{' && exp[i] == '}')
                pop();
            else
                return 0;
        }
    }

    return isEmpty() ? 1 : 0;
}

int main()
{
    char *exp = "{[(a+b)*(c-d)]/e}";

    if (isBalanced(exp))
        printf("Balanced!\n");
    else
        printf("NOT balanced!\n");

    return 0;
}