#include <stdio.h>

void mello()
{
    printf("mello\n");
}
void gello()
{
    printf("Gello\n");
    mello();
}
void hello()
{
    printf("Hello\n");
    gello();
}
int main()
{
    printf("hi\n");
    hello();
    return 0;
}