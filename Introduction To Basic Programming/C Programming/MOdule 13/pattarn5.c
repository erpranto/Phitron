#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = 0, star = n-1; // if want t print n numbers of line use =2*n-1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }

    return 0;
}