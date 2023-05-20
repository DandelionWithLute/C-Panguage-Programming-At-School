#include <stdio.h>
int orz(int s)
{
    if (s > 0)
        return 1;
    else
        return 0;
}

int main()
{
    int s;
    scanf("%d", &s);
    int res = orz(s);
    printf("%d\n", res);
    return 0;
}