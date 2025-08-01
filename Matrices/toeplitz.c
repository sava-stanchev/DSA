#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int *A;
    int n;
};

void Set(struct Matrix *m, int i, int j, int x)
{
    if (i == 1)
        m->A[j - i] = x;
    else if (j == 1)
        m->A[m->n + i - j - 1] = x;
}

int Get(struct Matrix m, int i, int j)
{
    if (i <= j)
        return m.A[j - i];
    else
        return m.A[m.n + i - j - 1];
}

void Display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i <= j)
                printf("%d ", m.A[j - i]);
            else
                printf("%d ", m.A[m.n + i - j - 1]);
        }
        printf("\n");
    }
}

int main()
{
    struct Matrix m;
    int i, j, x;

    printf("Enter the dimension: ");
    scanf("%d", &m.n);
    m.A = (int *)malloc((2 * m.n - 1) * sizeof(int));

    printf("Enter all elements\n");
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            scanf("%d", &x);
            Set(&m, i, j, x);
        }
    }

    printf("\n\n");
    Display(m);

    return 0;
}
