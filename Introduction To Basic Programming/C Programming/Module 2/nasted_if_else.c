#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar Jabo\n");
        if (tk >=10000)
        {
            printf("Then St. MArtain Jabo\n");
        }
        else
        {
            printf("St. Martin Jaoa Hobe na\nCox's Bazar theke Bari\n");
        }
    }
    else
    {
        printf("Kothao jabo na!\nDirect Bari\n");
    }
    return 0;
}