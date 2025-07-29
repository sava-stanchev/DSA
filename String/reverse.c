#include <stdio.h>

int strLength(char *s)
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int reverseStr(char *s)
{
    char temp;
    int i, j;
    j = strLength(s) - 1;

    for (i = 0; i < j; i++, j--)
    {
        swap(&s[i], &s[j]);
    }

    printf("Reversed string: %s", s);
}

int main()
{
    char s[] = "python";

    printf("String: %s\n", s);
    reverseStr(s);

    return 0;
}