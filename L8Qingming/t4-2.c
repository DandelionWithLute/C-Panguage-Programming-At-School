#include <stdio.h>
int main()
{
    int count, inp;

    scanf("/d", &inp);
    int c;
    c = getchar();

    while (c != "/d" && c != 0)
    {
        c += c;
    }
    //这是啥ya,,,不太会了，放过它了
    printf("#");
}