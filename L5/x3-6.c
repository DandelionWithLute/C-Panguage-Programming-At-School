#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x < 500)
    {
        y = x;
    }
    else if (x < 1000)
    {
        y = 0.95 * (x - 500) + 500;
    }
    else if (x < 2000)
    {
        y = 0.9 * (x - 1000) + 475 + 500;
    }
    else if (x < 3000)
    {
        y = 0.85 * (x - 2000) + 900 + 475 + 500;
    }
    else
    {
        y = 0.8 * (x - 3000) + 850 + 900 + 475 + 500;
    };
    printf("x=%d,y=%d", x, y);
}