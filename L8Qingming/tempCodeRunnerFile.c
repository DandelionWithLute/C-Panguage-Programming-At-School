#include <stdio.h>
int main()
{
    int count, inp;

    scanf("/d", &inp);
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }

    // while (c != /d && c != 0)
    // {
    //     c += c;
    // }
}