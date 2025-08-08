#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x = a[0], cnt = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] < x)
        {
            x = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cnt++;
        }
    }
    if(cnt%2==0)
    {
        printf("Unlucky");
    }
       if(cnt%2!=0)
    {
        printf("Lucky");
    }
    return 0;
}