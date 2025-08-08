#include <stdio.h>
#include<limits.h>
int main()
{
    int x;
    int max = INT_MIN;
    // int min = INT_MAX;
    scanf("%d", &x);
    for (int i = 0; i <= x; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
        // if (val < min)
        // {
        //     max = val;
        // }
    }
    printf("%d",max);
    // printf("%d",min);
    return 0;
}