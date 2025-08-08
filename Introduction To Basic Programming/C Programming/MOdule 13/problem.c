#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // Top half of the diamond
    for (int i = 1; i <= n; i++)
    {
        // Printing spaces for the top half
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Printing stars for the top half
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Bottom half of the diamond
    for (int i = 0; i < n; i++) // Make sure we don't print the middle row again
    {
        // Printing spaces for the bottom half
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        // Printing stars for the bottom half
        for (int j = 1; j <= 2 * (n - i) - 1; j++) // Corrected: Loop upwards
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
