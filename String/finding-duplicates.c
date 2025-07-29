#include <stdio.h>

void duplicates(char *s)
{
    int count[26] = {0};
    int i;

    for (i = 0; s[i] != '\0'; i++)
        count[s[i] - 97]++;

    for (i = 0; i < 26; i++)
    {
        if (count[i] > 1)
            printf("%c has %d duplicates\n", i + 97, count[i]);
    }
}

int main()
{
    char s[] = "finding";

    printf("String: %s\n", s);
    duplicates(s);

    return 0;
}