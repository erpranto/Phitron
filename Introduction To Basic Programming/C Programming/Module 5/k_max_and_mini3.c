#include <stdio.h>
int main()
{
    int a, b, c;
    int min = a;
    int max = a;
    scanf("%d %d %d", &a, &b, &c);
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }

    printf("%d", max);
    return 0;
}