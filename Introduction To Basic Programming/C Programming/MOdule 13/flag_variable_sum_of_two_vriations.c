#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int flag=0;     // this is flag variable
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n - 1; i++) // check first arrey
    {
        for (int j = i + 1; j < n; j++) // check 2nd arrey
        {
            if (ar[i] + ar[j] == x)
            {
                flag=1;
                printf("Yes\n");
                printf("%d %d ",ar[i],ar[j]);
            }
        }
    }
    if(flag==0)
    {
        printf("No\n");
    }

    return 0;
}