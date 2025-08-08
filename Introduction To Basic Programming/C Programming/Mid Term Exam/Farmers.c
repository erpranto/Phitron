#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int tf = m1 + m2;
        int nd = (d * m1) / (tf);
        int fd = d - nd;
        printf("%d\n", fd);
    }
    return 0;
}