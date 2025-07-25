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
    struct Array arr = {{6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19}, 15, 11};

    Display(arr);
    printf("\nMissing elements are\n");

    int diff = arr.A[0];
    int i;

    for (i = 0; i < arr.length; i++)
    {
        if (arr.A[i] - i != diff)
        {
            while (diff < arr.A[i] - i)
            {
                printf("%d\n", i + diff);
                diff++;
            }
        }
    }

    return 0;
}