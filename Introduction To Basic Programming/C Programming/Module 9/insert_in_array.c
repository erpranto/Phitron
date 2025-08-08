#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int ind, ins;
    scanf("%d %d", &ind, &ins);
    for (int j = n; j >= ind + 1; j--)
    {
        ar[j] = ar[j - 1];
    }
    ar[ind] = ins;
    for (int k = 0; k <= n; k++)
    {
        printf("%d ", ar[k]);
    }
    return 0;
}