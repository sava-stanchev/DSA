#include <stdio.h>

void permutations(char *s, int k)
{
    static int flag[10] = {0};
    static char res[10];
    int i;

    if (s[k] == '\0')
    {
        res[k] = '\0';
        printf("%s\n", res);
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (flag[i] == 0)
            {
                res[k] = s[i];
                flag[i] = 1;
                permutations(s, k + 1);
                flag[i] = 0;
            }
        }
    }
}

int main()
{
    char s[] = "ABC";

    printf("String: %s\n", s);
    permutations(s, 0);

    return 0;
}