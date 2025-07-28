#include <stdio.h>

int countWords(char *s)
{
    int countW = 1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i - 1] != ' ')
            countW++;
    }

    return countW;
}

int main()
{
    char s[] = "How Are       You";

    printf("String: %s\n", s);
    printf("Number of words: %d\n", countWords(s));

    return 0;
}