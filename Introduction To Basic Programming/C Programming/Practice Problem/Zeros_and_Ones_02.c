// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
 
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }

//     int x;
//     scanf("%d", &x);

//     if (ar[x-1] == 0)
//     {
//         ar[x-1] = 1;
//     }
//     else if (ar[x-1] == 1)
//     {
//         ar[x-1] = 0;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", ar[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
 
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int x;
    scanf("%d", &x);

    if (ar[x] == 0)
    {
        ar[x] = 1;
    }
    else if (ar[x-1] == 1)
    {
        ar[x] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}