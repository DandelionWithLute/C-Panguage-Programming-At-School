#include <stdio.h>
int main()
{
    int day;
    printf("Do we have PE class today?\n");
    printf("Please tell the day in the week\n");
    scanf("%d", &day);
    switch (day)
    {
    case 0:
        printf("No, We do not have PE class on Sunday.");
        break;
    case 1:
        printf("No, We do not have PE class on Monday.");
        break;
    case 2:
        printf("Yes, We do have PE class on Tuesday.");
        break;
    case 3:
        printf("No, We do not have PE class on Wednesday.");
        break;
    case 4:
        printf("Yes, We do have PE class on Thursday.");
        break;
    case 5:
        printf("No, We do not have PE class on Friday.");
        break;
    case 6:
        printf("No, We do not have PE class on Saturday.");
        break;
    default:
        printf("Invalid day in the week!Please type between 0 ~ 6 !");
        break;
    }
}