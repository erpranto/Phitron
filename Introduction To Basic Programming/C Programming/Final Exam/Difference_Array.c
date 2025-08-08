#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    x = b[i];g
                    b[i] = b[j];
                    b[j] = x;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int d = a[i] - b[i];
            if (d < 0)
            {
                d = -d;
            }
            c[i] = d;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }
    return 0;
}