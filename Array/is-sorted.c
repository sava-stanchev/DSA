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

int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }

    return 1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 16}, 10, 5};

    Display(arr);
    printf("\n(1 = sorted, 0 = not sorted): %d", isSorted(arr));

    return 0;
}