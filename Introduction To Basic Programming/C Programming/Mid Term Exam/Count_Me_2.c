#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a')
        {
            continue;
        }
        else if (s[i] == 'e')
        {
            continue;
        }
        else if (s[i] == 'i')
        {
            continue;
        }
        else if (s[i] == 'o')
        {
            continue;
        }
        else if (s[i] == 'u')
        {
            continue;
        }
        else
        {
            n++;
        }
    }
    printf("%d", n);
    return 0;
}