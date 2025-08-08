// #include<stdio.h>
// void hello(int i)
// {
//     if (i==0)
//     {
//         return;
//     }
//     printf("%d\n",i);
//     hello(i-1);
// }
// int main()
// {
//     int i=5;
//     hello(i);
//     return 0;
// }

//// magiccc
#include<stdio.h>
void hello(int i)
{
    if (i==6)
    {
        return;
    }
    
    hello(i+1);
    printf("%d\n",i);
}
int main()
{
    int i=1;
    hello(i);
    return 0;
}