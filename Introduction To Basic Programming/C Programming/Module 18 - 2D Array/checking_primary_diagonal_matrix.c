#include <stdio.h>
#include<stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
int is_diagonal=true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j)
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal=false;
                        printf("Not Primary Diagonal");
                    }
                }
            }
        }
        if(is_diagonal==true)
        {
            printf("Primary Diagonal"); 
        }
    }
    else
    {
        printf("Not Diagonal");
    }
    return 0;
}