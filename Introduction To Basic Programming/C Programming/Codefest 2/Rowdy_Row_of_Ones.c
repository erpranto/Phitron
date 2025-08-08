#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int mx1 = -1, ans = -1;
    for (int i = 0; i < n; i++)
    {
        int f1 = m;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                f1 = j;
                break;
            }
        }
        int one = m - f1;
        if (one > mx1)
        {
            mx1 = one;
            ans = i;
        }
    }
    printf("%d", ans);
    return 0;
}