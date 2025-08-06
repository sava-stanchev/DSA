#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void InsertLast(int x)
{
    struct Node *t, *last;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (first == NULL)
        first = last = t;
    else
    {
        last->next = t;
        last = t;
    }
}

int main()
{
    InsertLast(8);
    InsertLast(3);
    InsertLast(9);

    Display(first);

    return 0;
}