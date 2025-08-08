#include <stdio.h>
int main()
{
    int sum = 0;
    char s[1000001];
    scanf("%s", s);
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        sum = sum + s[i] - 48;
    }
    printf("%d\n", sum);

    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     sum = sum + (s[i] - '0');
    // }
    // printf("%d\n", sum);

    return 0;
}