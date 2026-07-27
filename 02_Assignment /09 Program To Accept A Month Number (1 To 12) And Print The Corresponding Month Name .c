#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter A Month Number(1 To 12) : ");
    scanf("%d",&Num);

    if (Num == 1)
    {
        printf("\n The Month Is : January.");
    }
    else if (Num == 2)
    {
        printf("\n The Month Is : February.");
    }
    else if (Num == 3)
    {
        printf("\n The Month Is : March.");
    }
    else if (Num == 4)
    {
        printf("\n The Month Is : April.");
    }
    else if (Num == 5)
    {
        printf("\n The Month Is : May.");
    }
    else if (Num == 6)
    {
        printf("\n The Month Is : June.");
    }
    else if (Num == 7)
    {
        printf("\n The Month Is : July.");
    }
    else if (Num == 8)
    {
        printf("\n The Month Is : August.");
    }
    else if (Num == 9)
    {
        printf("\n The Month Is : September.");
    }
    else if (Num == 10)
    {
        printf("\n The Month Is : October.");
    }
    else if (Num == 11)
    {
        printf("\n The Month Is : November.");
    }
    else if (Num == 12)
    {
        printf("\n The Month Is : December.");
    }
    else
    {
        printf("\n The Month Is Invalid!!!");
    }

    getch();
    return 0;
}
