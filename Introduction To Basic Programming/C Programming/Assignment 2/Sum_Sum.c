#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum1 = 0, sum2 = 0, inp=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &inp);
        if (inp >= 0)
        {
            sum1 = sum1 + inp;
        }
        else
        {
            sum2 = sum2 + inp;
        }
    }
    printf("%d %d", sum1, sum2);
    return 0;
}