#include <stdio.h>
int main()
{
    int i;
    for (int i = 2; i <= 100; i = i * 2)
    {
        printf("Hello %d\n", i);
    }
    return 0;
}