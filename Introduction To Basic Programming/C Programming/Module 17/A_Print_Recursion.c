#include<stdio.h>
void rec(int i, int n)
{
    if(i>n)
    {
        return;
    }
    printf("I love Recursion\n");
    rec(i+1,n);
}
int main()
{
    int n;
    int i =1;
    scanf("%d",&n);
    rec(i,n);
    return 0;
}