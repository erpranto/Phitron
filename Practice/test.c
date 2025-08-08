#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d Odd\n", i);
        }
        else
        {
            printf("%d Even\n", i);
        }
    }
    return 0;
}