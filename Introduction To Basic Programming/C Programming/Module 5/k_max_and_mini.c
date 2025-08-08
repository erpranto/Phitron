#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c)
    {
        printf("%d ", a);
        if (b >= c)
        {
            printf("%d", b);
        }
        if (c >= b)
        {
            printf("%d", c);
        }
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
        if (a <= c)
        {
            printf("%d", a);
        }
        if(c<=a)
        {
            printf("%d", c);
        }
    }
    else if (c <= a && c <= b)
    {
        printf("%d ", c);
        if (b >= a)
        {
            printf("%d", b);
        }
        if(a<=c)
        {
            printf("%d", a);
        }
    }
    return 0;
}