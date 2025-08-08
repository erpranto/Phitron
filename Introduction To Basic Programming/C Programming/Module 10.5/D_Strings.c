#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    char s[11], t[11];
    scanf("%s %s", s, t);
    printf("%d %d\n", strlen(s), strlen(t));

    printf("%s%s\n", s, t);

    char c = 0;
    c=s[0];
    s[0] = t[0];
    t[0] = c;

    printf("%s ", s);
    printf("%s\n", t);
    return 0;
}