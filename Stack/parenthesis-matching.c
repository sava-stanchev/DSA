#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void Display()
{
    struct Node *p;
    p = top;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("\n");
}

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

int isBalanced(char *exp)
{
    int i;

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;

            pop();
        }
    }

    if (top == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char *exp = "((a+b)*(c-d))";

    if (isBalanced(exp))
        printf("Balanced!\n");
    else
        printf("NOT balanced!\n");

    return 0;
}