#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
        swap(&arr->A[i], &arr->A[j]);
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    Reverse(&arr);
    Display(arr);

    return 0;
}