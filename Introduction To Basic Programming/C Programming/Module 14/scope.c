#include<stdio.h>
int x=10;
int sum()
{
    printf("Sum-->%d",x);
}
int main()
{
    printf("Main-->%d\n",x);
    sum();
}