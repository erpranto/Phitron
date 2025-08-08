#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s", s);
        int cap = 0, small = 0, num = 0;
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                cap++;
            }
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                small++;
            }
            if (s[j] >= '0' && s[j] <= '9')
            {
                num++;
            }
        }
        printf("%d %d %d\n",cap,small,num);
    }

    return 0;
}