#include <stdio.h>
int max(int a[], int n, int i)
{
    if (i == n - 1)
    {
        return a[i];
    }
    int mx = max(a, n, i + 1);
    if (a[i] > mx)
    {
        return a[i];
    }
    else
    {
        return mx;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mx = max(a, n, i);
    printf("%d", mx);
    return 0;
}