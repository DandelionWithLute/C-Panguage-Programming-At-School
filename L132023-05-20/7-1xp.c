#include <stdio.h>
#include <math.h>

int myprime(int a)
{
    int i, end;
    end = a % 3;
    if (end == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i, a, n;
    n = 0;
    int s[100] = {0};
    for (a = 1; a <= 100; a++)
    {
        int k = myprime(a);
        if (k == 1)
        {
            n += 1;
            s[a] = a;
            printf("%d\n", s[a]);
        }
    }
}
