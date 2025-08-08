#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // printing space
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) // printing star
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i <= n; i++) // must need to start with 0
    {
        for (int j = 1; j <= i; j++) // printing space oposite
        {
            printf(" ");
        }
        for (int j = 2 * (n - i) - 1; j >= 1; j--) // printing star oposite
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}