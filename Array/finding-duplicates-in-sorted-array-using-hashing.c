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

int main()
{
    struct Array arr = {{3, 6, 8, 8, 10, 12, 15, 15, 15, 20}, 15, 10};

    Display(arr);

    int max = arr.A[arr.length - 1];
    int min = arr.A[0];
    int *count = malloc((max + 1) * sizeof(int));
    int i;

    for (i = 0; i <= max; i++)
        count[i] = 0;

    for (i = 0; i < arr.length; i++)
        count[arr.A[i]]++;

    for (i = 0; i <= max; i++)
        if (count[i] > 1)
            printf("\n%d has %d duplicates", i, count[i]);

    free(count);
    return 0;
}