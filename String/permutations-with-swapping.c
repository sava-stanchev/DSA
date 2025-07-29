#include <stdio.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permutationsSwap(char *s, int l, int h)
{
    int i;

    if (l == h)
    {
        printf("%s\n", s);
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(&s[l], &s[i]);
            permutationsSwap(s, l + 1, h);
            swap(&s[l], &s[i]);
        }
    }
}

int main()
{
    char s[] = "ABC";

    printf("String: %s\n", s);
    permutationsSwap(s, 0, 2);

    return 0;
}