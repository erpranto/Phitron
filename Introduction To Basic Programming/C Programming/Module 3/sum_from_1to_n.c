#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        // sum+=1
        //  printf("%d", sum);
    }
    printf("%d", sum);
    return 0;
}