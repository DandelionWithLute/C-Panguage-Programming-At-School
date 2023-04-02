#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x <= 0)
    {
        y = x + 10;
    }
    else if (x <= 1)
    {
        y = 0;
    }
    else
    {
        y = x - 10;
    };
    printf("x=%d,y=%d",x,y);
}