#include <stdio.h>

void strUpperCase(char *s)
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] - 32;
    }
}

int main()
{
    char s[] = "welcome";

    printf("String: %s\n", s);
    strUpperCase(s);
    printf("%s\n", s);

    return 0;
}