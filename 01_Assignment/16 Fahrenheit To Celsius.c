#include<stdio.h>
#include<conio.h>

int main()
    {
        float F = 0.0, C = 0.0;

        printf("\n Enter Temperature in Fahrenheit : ");
        scanf("%f",&F);

        C = (F - 32) * (5.0/9.0);

        printf("\n Temperature Of Fahrenheit in Celsius is  = %0.2f ", C);

        getch();
        return 0;
    }
