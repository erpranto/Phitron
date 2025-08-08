#include <stdio.h>
void fr(int n)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }
    fr(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fr(n);
    return 0;
}