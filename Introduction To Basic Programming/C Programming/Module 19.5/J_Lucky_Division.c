#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    if (n % 4 != 0 || n % 7 != 0)
    {
        x = 0;
        printf("YES");
        return;
    }
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            x = 0;
            break;
        }
        n /= 10;
    }
    // printf("%d ", x);
    if (x == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}