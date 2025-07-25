#include <stdio.h>
#include <stdlib.h>

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

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;

    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }

    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;

    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }

    return min;
}

int main()
{
    struct Array arr = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10}, 15, 10};

    Display(arr);
    printf("\nMissing elements are\n");

    int h = Max(arr);
    int l = Min(arr);
    int *count = malloc((h + 1) * sizeof(int));
    int i;

    for (i = 0; i <= h; i++)
        count[i] = 0;

    for (i = 0; i < arr.length; i++)
        count[arr.A[i]]++;

    for (i = l; i <= h; i++)
        if (count[i] == 0)
            printf("%d\n", i);

    free(count);
    return 0;
}