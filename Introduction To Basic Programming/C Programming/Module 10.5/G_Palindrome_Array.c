#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int i = 0, j = n - 1, sum = 1;
    while (i < j)
    {
        if (ar[i] != ar[j])
        {
            sum = 0;
            break;
        }
        i++;
        j--;
    }
    if (sum == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}