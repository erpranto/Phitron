#include<stdio.h>
int my_len(char s[])
{
    int cnt=0;
    for(int i =0;s[i]!='\0';i++)
    {
            cnt++;
    }
    return cnt;
}
int main()
{
    char s[101];
    scanf("%s",s);
    int count = my_len(s);
    printf("%d",count);
    return 0;
}