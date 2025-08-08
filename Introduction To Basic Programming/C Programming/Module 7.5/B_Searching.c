#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int b;
    scanf("%d", &b);
    for (int j = 0; j < a; j++)
    {
        if (ar[j] == b)
        {
            printf("%d\n", j);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}