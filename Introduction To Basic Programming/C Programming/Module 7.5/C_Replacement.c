#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] < 0)
        {
            printf("2 ");
        }
        else if (ar[i] > 0)
        {
            printf("1 ");
        }
        else if(ar[i]==0)
        {
            printf("0 ");
        }
    }
    return 0;
}