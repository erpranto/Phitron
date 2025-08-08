#include <stdio.h>
long long int sum(int ar[],int n,int i)
{
    if(i==n)
    {
        return 0;
    }
    long long int s=ar[i]+sum(ar,n,i+1);
    return s;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int i=0;
    long long int ans=sum(ar,n,i);
    printf("%lld",ans);
    return 0;
}