#include <stdio.h>
void req(int n, int i)
{
    if (i > n)
    {
        return;
    }
    req(n, i+1);

    printf("%d", i);

    if (i > 1)
    {
        printf(" ");
    }
}
int main()
{
    int n;
    int i = 1;
    scanf("%d", &n);
    req(n, i);
    return 0;
}