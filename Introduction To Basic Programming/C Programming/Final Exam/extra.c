#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int st = 2 * (n + 4) - 1;
    int space = (st - star) / 2;
    for (int i = 1; i <= n + 4; i++)
    {
        space = (st - star) / 2;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
    }
    int spac = (st - n) / 2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= spac; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}