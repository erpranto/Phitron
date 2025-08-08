#include <stdio.h>
int main()
{
    int x = 0;
    int c[] = {1, 2, 3, 4, 5, 6};   // declare and initilazition
    int d[50] = {0};    //to make the whole array zero only for fixed array
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    for (int i = 0; i < 50; i++)
    {
        printf("%d ", d[i]);
    }
    return 0;
}