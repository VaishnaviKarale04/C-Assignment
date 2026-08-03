#include<stdio.h>
#include<conio.h>

int main()
    {
        int Num = 0, Div = 0;

        printf("\n Enter A Number : ");
        scanf("%d",&Num);

        Div = (Num % 7 == 0);

        if( Div = (Num % 7 == 0))
        {
            printf("\n The %d Is Divisible By 7.",Num);
        }
        else
        {
            printf("\n The %d Not Is Divisible By 7.",Num);
        }

        getch();
        return 0;
    }
