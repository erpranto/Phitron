#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int sum=a/1000;
    if (sum% 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}