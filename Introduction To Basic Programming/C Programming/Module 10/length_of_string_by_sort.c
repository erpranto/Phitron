#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int ch = strlen(s);
    printf("%s\n", s);
    printf("%d\n", ch);
    printf("%d\n",strlen(s));
    return 0;
}