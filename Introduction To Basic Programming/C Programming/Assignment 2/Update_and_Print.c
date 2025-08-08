#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d %d", &a, &b);
    for (int j = n-1; j >= 0; j--)
    {
        if (j == a)
        {
            ar[j] = b;
        }
        printf("%d ", ar[j]);
    }
    return 0;
}