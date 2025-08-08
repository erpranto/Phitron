#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar Jabo\n");
        if (tk >= 7000)
        {
            printf("Sajek Jabo\n");
            if (tk >= 10000)
            {
                printf("Bandorbon Jabo\n");
                if (tk >= 15000)
                {
                    printf("Tour Hobe Uradhura\n");
                }
            }
        }
    }

    else
    {
        printf("Barite Shuye Ghumabo\n");
    }
    return 0;
}
