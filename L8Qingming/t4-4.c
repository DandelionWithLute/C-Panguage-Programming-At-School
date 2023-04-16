#include <stdio.h>
int main()
{
    int num;
    while (num != 0)
    {
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Hello!");
            printf("Press any key to continue.\n");
            break;
        case 2:
            printf("Welcome!");
            printf("Press any key to continue.\n");
            break;
        case 3:
            printf("Good-bye!");
            num =0;
            break;
        default:
            printf("Press any key to continue.\n");
        }
    }
}