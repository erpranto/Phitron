#include<stdio.h>
int fun(int* p)
{
    *p=20;
}
int main()
{
    int x=10;
    fun(&x); //sending the value of x
    printf("%d",x);
    return 0;
}