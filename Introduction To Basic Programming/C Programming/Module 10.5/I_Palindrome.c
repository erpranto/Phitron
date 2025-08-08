#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int i=0, j=strlen(s)-1, k = 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            k = 0;
            break;
        }
        else
        {
            k = 1;
        }
        i++;
        j--;
    }
    if (k == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}