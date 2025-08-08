#include <stdio.h>
int main()
{
    int s[101];
    scanf("%s", &s);
    printf("%s\n", s);
    // printf("%d\n", s);

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("Total Char.= %d", count);
    return 0;
}