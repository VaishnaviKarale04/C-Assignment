#include<stdio.h>
#include<conio.h>

int main()
    {
        int Num = 0;

        printf("\n Enter A Number : ");
        scanf("%d",&Num);

        if(Num % 2 == 0)
        {
            printf("\n The Given Number Is Even.");
        }
        else
        {
            printf("\n The Given Number Is Odd.");
        }

        getch();
        return 0;
    }
