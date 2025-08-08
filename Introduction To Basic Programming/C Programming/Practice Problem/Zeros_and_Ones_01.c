#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]==0)
        {
            a++;
        }
        else if(ar[i]==1)
        {
            b++;
        }
    }
    printf("%d %d",a,b);
    return 0;
}