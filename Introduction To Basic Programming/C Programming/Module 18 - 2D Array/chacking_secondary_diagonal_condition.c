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
                if(i+j!=r-1)
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal=false;
                        printf("This is not a secondary diagonal Matrix\n");
                    }
                }
            }
        }
        if(is_diagonal==true)
        {
            printf("Secondary Diagonal");
        }
    }
    else
    {
        printf("Not Diagonal");
    }
    return 0;
}  