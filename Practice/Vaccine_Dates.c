#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int d,l,r;
        scanf("%d%d%d",&d,&l,&r);
        if(d<l)
        {
            printf("Too Early\n");
        }
        if(d>=l&&d<=r)
        {
            printf("Take second dose now\n");
        }
        if(d>r)
        {
            printf("Too Late\n");
        }
    }
    return 0;
}