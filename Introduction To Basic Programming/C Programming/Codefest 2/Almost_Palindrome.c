#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int x = 0; x < t; x++)
    {
        char s[1001];
        scanf("%s", s);
        int len = strlen(s);
        int freq[26] = {0};
        for (int i = 0; s[i] != '\0'; i++)
        {
            int f = s[i] - 'a';

            freq[f]++;
        }
        int odd = 0, ans;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                odd++;
            }
        }

        if (odd <= 1)
        {
            ans = 0;
        }
        else
        {
            ans = odd - 1;
        }
        printf("%d\n", ans);
    }
    return 0;
}