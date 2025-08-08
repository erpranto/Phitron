#include<stdio.h>
int main()
{
    int a[5][5],moves=0;
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                int r=i-2,c=j-2;
                if(r<0)
                {
                    r=-r;
                }
                if(c<0)
                {
                    c=-c;
                }
                moves=r+c;
            }
        }
    }
    printf("%d",moves);
    return 0;
}