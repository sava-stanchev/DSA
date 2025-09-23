#include <stdio.h>

void merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];

    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];

    for (i = l; i <= h; i++)
        A[i] = B[i];
}

void RMergeSort(int A[], int l, int h)
{
    int mid;

    if (l < h)
    {
        mid = (l + h) / 2;
        RMergeSort(A, l, mid);
        RMergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

int main()
{
    int A[] = {8, 3, 7, 4, 9, 2, 6, 5, 1}, n = 9, i;

    RMergeSort(A, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}