#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int ar[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int total_val = r * c;
    int zero = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (ar[i][j] == 0)
            {
                zero++;
            }
        }
    }
    if (total_val == zero)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("False");
    }
    return 0;
}