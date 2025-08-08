#include <stdio.h>
void fun(int x)
{
    x = 20;
    printf("Fun func. er x er add: %p\n",&x);
}
int main()
{
    int x = 10;
    fun(x);
    // printf("%d\n",x);
    printf("Main func. er x er add: %p\n",&x);
    return 0;
}