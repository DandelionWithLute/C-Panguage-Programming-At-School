#include <stdio.h>
#include <math.h>

int myprime(int a)
{
    int i, end;
    end = (int)sqrt((double)a);
    if (end * end == a)
    {
        return 0;
    }
    else
    {
        return 1;
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
