#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = 4+(n+1)/2;
    int line=5+(n+1)/2;
    for (int i = 1; i <= line; i++)
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
        space--;
        star += 2;
    }
    for(int i=0;i<5;i++) 
    {
        for(int i=0;i<5;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=n;i++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}