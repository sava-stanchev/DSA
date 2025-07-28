#include <stdio.h>

int strLength(char *s)
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}

int reverseStr(char *s)
{
    char temp;
    int i, j;
    j = strLength(s) - 1;

    for (i = 0; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
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