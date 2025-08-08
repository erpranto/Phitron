#include <stdio.h>
int main()
{

    char s[100001];

    fgets(s, 100001,stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            printf(" ");
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c",  s[i] - 'a' + 'A');
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] - 'A' + 'a');
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}