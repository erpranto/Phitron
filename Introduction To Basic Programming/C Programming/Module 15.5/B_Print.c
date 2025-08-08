#include <stdio.h>
int fun(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}