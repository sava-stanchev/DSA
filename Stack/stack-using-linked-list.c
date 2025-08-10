#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
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

void push(int x)
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

int pop()
{
    struct Node *t;
    int x = -1;

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

int main()
{
    push(10);
    push(20);
    push(30);

    Display();
    printf("Pop element: %d\n", pop());
    Display();

    return 0;
}