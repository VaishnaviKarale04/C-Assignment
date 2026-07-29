#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter A Year : ");
    scanf("%d",&Num);

    if (Num % 4 == 0)
    {
        printf("\n The Given Number Is Leap Year !!! ");
    }
    else
    {
        printf("\n The Given Number Is Not Leap Year !!! ");
    }

    getch();
    return 0;
}
