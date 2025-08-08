#include <stdio.h>
int a[50005];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        // int a[x];
        for (int j = 0; j < x; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int j = 1; j < x; j++)
        {
            while (a[j] % a[j - 1] == 0)
            {
                a[j]++;
            }
        }
        for (int j = 0; j < x; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}