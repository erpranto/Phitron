#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r;
    scanf("%d", &r);
    int a[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int p = 0, s = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {
                p += a[i][j];
            }
            if (i + j == r - 1)
            {
                s += a[i][j];
            }
        }
    }
    int dif=p-s;
    if(dif<0)
    {
        dif=-dif;
    }
    printf("%d ",dif);
    return 0;
}