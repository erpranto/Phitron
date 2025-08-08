#include <stdio.h>
int isLucky(int num)
{
    while (num > 0)
    {
        if (num % 10 != 4 && num % 10 != 7)
        {
            return 0;
        }
        num /= 10;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i) && n % i == 0)
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
