#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[l-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int x = is_palindrome(s);
    if (x == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}