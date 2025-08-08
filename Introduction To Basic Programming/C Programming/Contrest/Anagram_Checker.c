#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], c[101];
    scanf("%s %s", s, c);
    int lens = strlen(s);
    int lenc = strlen(c);
    if (lens != lenc)
    {
        printf("No\n");
        return 0;
    }
    for (int i = 0; i < lens; i++)
    {
        int fnd = 0;
        for (int j = 0; j < lenc; j++)
        {
            if (s[i] == c[j])
            {
                c[j] = '\0';
                fnd = 1;
                break;
            }
        }
        if (!fnd)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}