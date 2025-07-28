#include <stdio.h>

int isSameStr(char *s1, char *s2)
{
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return 0;
    }

    return 1;
}

int main()
{
    char s1[] = "Painter";
    char s2[] = "Painting";

    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);
    if (isSameStr(s1, s2))
        printf("Strings are the same");
    else
        printf("Strings are not the same");

    return 0;
}