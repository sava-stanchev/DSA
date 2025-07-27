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
    struct Array arr = {{6, 3, 8, 10, 16, 7, 5, 2, 9, 14}, 15, 10};

    Display(arr);

    int k = 10;
    int max = Max(arr);
    int min = Min(arr);
    int *count = malloc((max + 1) * sizeof(int));
    int i;

    for (i = 0; i <= max; i++)
        count[i] = 0;

    for (i = 0; i < arr.length; i++)
    {
        if (count[k - arr.A[i]] != 0)
            printf("\n%d + %d = %d", arr.A[i], k - arr.A[i], k);

        count[arr.A[i]]++;
    }

    free(count);
    return 0;
}