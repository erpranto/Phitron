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
    int ind;
    scanf("%d", &ind);
    for (int j = ind; j < n - 1; j++)
    {
        ar[j] = ar[j + 1];
    }

    // n--; 2 ta option ase eta nahole nicher ta

    for (int k = 0; k < n - 1; k++)
    {
        printf("%d ", ar[k]);
    }
    return 0;
}