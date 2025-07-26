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

    int i, j;

    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] == arr.A[i + 1])
        {
            j = i + 1;
            while (arr.A[j] == arr.A[i])
                j++;

            printf("\n%d has %d duplicates", arr.A[i], j - i);
            i = j - 1;
        }
    }

    return 0;
}