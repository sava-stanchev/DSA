#include <stdio.h>

int isAnagram(char *s1, char *s2)
{
    int count[26] = {0};
    int i;

    for (i = 0; s1[i] != '\0'; i++)
        count[s1[i] - 97]++;

    for (i = 0; s2[i] != '\0'; i++)
    {
        count[s2[i] - 97]--;

        if (count[s2[i] - 97] < 0)
            return 0;
    }

    return 1;
}

int main()
{
    char s1[] = "decimal";
    char s2[] = "medical";

    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);

    if (isAnagram(s1, s2))
        printf("Strings are anagrams\n");
    else
        printf("Strings are not anagrams\n");

    return 0;
}