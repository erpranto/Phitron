#include<stdio.h>
void rec(int i,int n)
{
    if(i>n)
    {
        return;
    }
    printf("%d\n",i);
    rec(i+1,n);
}
int main()
{
    int n;
    int i=1;
    scanf("%d",&n);
    rec(i,n);
    return 0;
}