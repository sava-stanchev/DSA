#include <stdio.h>

int strLength(char *s)
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}

int isPalindrome(char *s)
{
    int i = 0;
    int j = strLength(s) - 1;

    while (i < j)
    {
        if (s[i] != s[j])
            return 0;

        i++;
        j--;
    }

    return 1;
}

int main()
{
    char s[] = "madam";

    printf("String: %s\n", s);
    if (isPalindrome(s))
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");

    return 0;
}