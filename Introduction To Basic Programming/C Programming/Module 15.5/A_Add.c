#include <stdio.h>
int fun(int a, int b)
{
    int ans = a + b;
    printf("%d", ans);
    return ans;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    fun(a, b);

    return 0;
}