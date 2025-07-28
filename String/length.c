#include <stdio.h>

int strLength(char *s)
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}

int main()
{
    char s[] = "welcome";

    printf("String: %s\n", s);
    printf("String length: %d\n", strLength(s));

    return 0;
}