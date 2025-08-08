#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],d[101];
    scanf("%s %s",s,d);

    strcpy(s,d);

    // int l=strlen(d);
    // for(int i=0;i<=l;i++)
    // {
    //     s[i]=d[i];
    // }

    printf ("%s %s",s,d);
    return 0;
}