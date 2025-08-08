// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     scanf("%d %d",&a,&b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("A=%d \nB= %d ",a,b);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int tmp=a;
    a=b;
    b=tmp;
    printf("A=%d \nB=%d",a,b);
    return 0;
}