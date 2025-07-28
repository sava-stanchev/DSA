#include <stdio.h>

void strLowerCase(char *s)
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] + 32;
    }
}

int main()
{
    char s[] = "WELCOME";

    printf("String: %s\n", s);
    strLowerCase(s);
    printf("%s\n", s);

    return 0;
}