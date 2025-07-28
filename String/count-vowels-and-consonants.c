#include <stdio.h>

int countVowels(char *s)
{
    int countV = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            countV++;
        }
    }

    return countV;
}

int countConsonants(char *s)
{
    int countLetters = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            countLetters++;
        }
    }

    return countLetters - countVowels(s);
}

int main()
{
    char s[] = "How Are       You";

    printf("String: %s\n", s);
    printf("Number of vowels: %d\n", countVowels(s));
    printf("Number of consonants: %d\n", countConsonants(s));

    return 0;
}