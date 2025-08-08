#include <stdio.h>
int main()
{
    int n;
    int sum;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];    //sort of sum=sum=a[i]
                        // printf("%d ", a[i]);
    }
    printf("%d",sum);
    return 0;
}