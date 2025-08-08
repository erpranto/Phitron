#include<stdio.h>
void pr(int n)
{
    if(n==0)
    {
        return;
    }
    pr(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    pr(n);
    return 0;
}