#include <stdio.h>
void hello()   // recursive function     // the process is called recursion 
{
    printf("Hello\n");
    hello(); ////!!!! Allart Infinite loop
}
int main()
{
    printf("hi\n");
    hello();
    return 0;
}