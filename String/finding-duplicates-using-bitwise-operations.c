#include <stdio.h>

void duplicatesBitwise(char *s)
{
    int b1 = 0, b2 = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        b2 = 1;
        b2 = b2 << (s[i] - 97);

        if ((b2 & b1) > 0)
            printf("%c is a duplicate\n", s[i]);
        else
            b1 = b2 | b1;
    }
}

int main()
{
    char s[] = "finding";

    printf("String: %s\n", s);
    duplicatesBitwise(s);

    return 0;
}