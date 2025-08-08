#include<stdio.h>
#include<string.h>
int main()
{
    char st[101];
    scanf("%s",st);
    int l= strlen(st);
    int ans=st[0];
    for(int i=0;i<l;i++)
    {
        if(st[i]%2!= 0)
        {
            ans+=ans;
        }
    }
    printf("%d",ans);
    return 0;
}