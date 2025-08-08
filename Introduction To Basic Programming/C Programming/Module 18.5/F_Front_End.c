#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int j = n - 1;
    for (int i = 0; i <= j; i++)
    {
        printf("%d ", ar[i]);
        if (i < j)
        {
            printf("%d ", ar[j]);
            j--;
        }
    }
    return 0;
}