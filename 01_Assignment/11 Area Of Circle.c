#include<stdio.h>
#include<conio.h>

int main()
    {
        float Area = 0, PL = 3.14, Rad = 0;

        printf("\n Enter a Radius Of circle :");
        scanf("%f",&Rad);

        Area = PL * Rad * Rad;

        printf("\n Area Of circle : %f",Area);

        getch();
        return 0;
    }
