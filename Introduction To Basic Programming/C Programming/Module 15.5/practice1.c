#include <stdio.h>
int my_abs(int a)
{
    if (a < 0)
    {
        return -a;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    int absul = my_abs(a);
    printf("%d", absul);
    return 0;
}