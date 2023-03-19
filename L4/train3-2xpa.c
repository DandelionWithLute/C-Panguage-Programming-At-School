#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c;
    double delta, x1, x2;
    // a=1,b=4,c=3;
    a = 0, b = 9, c = 2;
    delta = b * b - 4 * a * c;
    printf("%d,%d,%d\n", a, b, c);
    printf("%lf\n", delta);
    if (a == 0)
    {
        printf("buhefa");
    }
    else if (delta < 0)
    {
        printf("wushigen");
    }
    else
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("X1=%lf\nx2=%lf\n", x1, x2);
    }
}