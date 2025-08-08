#include <stdio.h>
#include<string.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);
    int val = strcmp(x, y);
    if(val<0)
    {
        printf("%s\n",x);
    }
    else if(val>0)
    {
        printf("%s\n",y);
    }
    else if(val==0)
    {
        printf("%s\n",x);
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
// char X[21], Y[21];
// scanf("%s %s", X, Y);

// if (strcmp(X, Y) < 0)
// printf("%s\n", X);
// else
// printf("%s\n", Y);

// return 0;
// }