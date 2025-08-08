#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int k = 1; k <= n; k++)
    {
        long long int m;
        scanf("%lld", &m);
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        long long int mul = a * b * c;
        long long int ans = m / mul;
        if (m % mul != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", ans);
        }
    }
    return 0;
}