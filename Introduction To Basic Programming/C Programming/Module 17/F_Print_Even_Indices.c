#include <stdio.h>
void rec(int ar[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    rec(ar, n, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int n;
    int i = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    rec(ar, n, i);
    return 0;
}