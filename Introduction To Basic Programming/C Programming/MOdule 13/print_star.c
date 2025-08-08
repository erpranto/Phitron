#include<stdio.h>
int main()
{
    int n,star=1;
    scanf("%d",&n);
    for (int i =1;i<=n;i++) // printing line
    {
        for(int j=1;j<=star;j++) //printing star 
        {
            printf("*");
        }
        star++;
        printf("\n");
    }
    return 0; 
}
