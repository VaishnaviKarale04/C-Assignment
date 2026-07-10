#include<stdio.h>
#include<conio.h>

int main()
    {
        float Side = 0, Area = 0;

        printf("\n Enter a Side Of Squre : ");
        scanf("%f",&Side);

        Area = Side * Side;

        printf("\n Area Of Squre : %f",Area);

        getch();
        return 0;
    }
