#include <stdio.h>
// #include<string.h> [when f gets don't work]
int main()
{
    char s[50];
    // gets(s);
    // two option use gets or fgets but better to use fgets
    fgets(s, 50, stdin); // fgets(name,size[with null],stdin)
    printf("%s", s);
    return 0;
}