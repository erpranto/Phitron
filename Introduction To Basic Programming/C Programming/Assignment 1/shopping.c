#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    if (i > 1000)
    {
        printf("I will buy Punjabi\n");
        if (i - 1000 >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}