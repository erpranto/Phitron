#include <stdio.h>
int min(int ar[], int n)
{
    int min = ar[0];

    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    printf("%d ",min);
    return min;
}
int max(int ar[], int n)
{
    int max = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    printf("%d",max);
    return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int minimum = min(ar,n);
    int maximum = max(ar,n);
    // printf("%d %d", minimum, maximum);
    return 0;
}