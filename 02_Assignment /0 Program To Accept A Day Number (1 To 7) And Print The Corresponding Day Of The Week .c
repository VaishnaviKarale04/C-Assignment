#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter A Day Number(1 To 7) : ");
    scanf("%d",&Num);

    if (Num == 1)
    {
        printf("\n The Day Of The Week Is : Monday ");
    }
    else if (Num == 2)
    {
        printf("\n The Day Of The Week Is : Tuesday");
    }
    else if (Num == 3)
    {
        printf("\n The Day Of The Week Is : Wednesday ");
    }
    else if (Num == 4)
    {
        printf("\n The Day Of The Week Is : Thursday ");
    }
    else if (Num == 5)
    {
        printf("\n The Day Of The Week Is : Friday ");
    }
    else if (Num == 6)
    {
        printf("\n The Day Of The Week Is : Saturday ");
    }
    else if (Num == 7)
    {
        printf("\n The Day Of The Week Is : Sunday ");
    }
    else
    {
        printf("\n The Day Of The Week Is Invalid!!!");
    }

    getch();
    return 0;
}
