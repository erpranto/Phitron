#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) // print line
    {
        for (int j = 1; j <= space; j++) // print space
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) // print star
        {
            printf("*");
        }
        printf("\n");
        space--;
        star += 2;
    }
    return 0;
}