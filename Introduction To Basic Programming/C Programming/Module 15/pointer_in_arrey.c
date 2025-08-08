#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    // array er name diye o'th index er value dekhay directly
    *a = 100;
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", a[i]);
    }
    return 0;
}