#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int p=0,s=0;
   for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                p+=a[i][j];
            }
            if(i+j == n-1)
            {
                s+=a[i][j];    
            }
        }
    }
    int ans=p-s;
    if(ans<0)
    {
        ans = -ans;
    }
    printf("%d",ans);
    return 0;
}