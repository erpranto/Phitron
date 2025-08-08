#include <stdio.h>
void swap_it(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);
    printf("%d %d",a,b);
    return 0;
}