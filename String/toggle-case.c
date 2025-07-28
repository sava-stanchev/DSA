#include <stdio.h>

void strToggleCase(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }
}

int main()
{
    char s[] = "wElCome";

    printf("String: %s\n", s);
    strToggleCase(s);
    printf("%s\n", s);

    return 0;
}