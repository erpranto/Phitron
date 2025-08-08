#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int ans = INT_MAX;
    int pos = 1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < ans)
        {
            ans = ar[i];
            pos=1+i;
        }
    }
    printf("%d %d", ans, pos);
    return 0;
}