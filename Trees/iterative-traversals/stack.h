#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    struct Node **S;
};

void createStack(struct Stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->S = (struct Node **)malloc(st->size * sizeof(struct Node *));
}

void push(struct Stack *st, struct Node *x)
{
    if (st->top == st->size - 1)
        printf("Stack overflow\n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

struct Node *pop(struct Stack *st)
{
    struct Node *x = NULL;

    if (st->top == -1)
        printf("Stack underflow\n");
    else
    {
        x = st->S[st->top--];
    }

    return x;
}

int isEmptyStack(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}

#endif