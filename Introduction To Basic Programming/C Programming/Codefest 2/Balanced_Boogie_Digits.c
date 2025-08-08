#include <stdio.h>
int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    int flag = 0;
    for (int i = l; i <= r; i++)
    {
        int even = 0, odd = 0;
        int sen = i;
        while (sen > 0)
        {
            int num = (sen) % 10;
            if (num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            sen /= 10;
        }
        if (even == odd)
        {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("-1\n");
    }
    return 0;
}