#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int even = 0, odd = 0;
    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--)
    {
        int dig = s[i] - '0';
        int posr = len - i;
        if (posr % 2 == 1)
        {
            odd += dig;
        }
        else
        {
            even += dig;
        }
    }
    int dif = 0;
    if (odd > even)
    {
        dif = odd - even;
    }
    else
    {
        dif = even - odd;
    }
    if(dif%11==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}