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
    int specific_row;
    scanf("%d", &specific_row);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", ar[specific_row][i]);
    }
    printf("\n");
    int specific_col;
    scanf("%d", &specific_col);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", ar[i][specific_col]);
    }
    return 0;
}