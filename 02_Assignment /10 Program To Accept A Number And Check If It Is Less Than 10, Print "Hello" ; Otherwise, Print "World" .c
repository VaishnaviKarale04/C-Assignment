#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&Num);

    if (Num < 10)
    {
        printf("\n Hello ");
    }
    else
    {
        printf("\n World ");
    }

    getch();
    return 0;
}
