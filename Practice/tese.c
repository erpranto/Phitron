#include <stdio.h>
int main()
{
    int a;
    scanf("%i", &a);
    for (int i = 2; i <= a; i++)
    {
        if (i%i == 1 && i / 1 == i)
        {
            printf("%d This Is a prime number\n",i);
        }
    }
    return 0;
}
