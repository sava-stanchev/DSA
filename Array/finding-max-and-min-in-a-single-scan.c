#include <stdio.h>

struct Array
{
    int A[15];
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

int main()
{
    struct Array arr = {{5, 8, 3, 9, 6, 2, 10, 7, -1, 4}, 15, 10};

    Display(arr);

    int min = arr.A[0];
    int max = arr.A[0];
    int i;

    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
        else if (arr.A[i] > max)
            max = arr.A[i];
    }

    printf("\nMax element: %d", max);
    printf("\nMin element: %d", min);
    return 0;
}