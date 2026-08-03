#include<stdio.h>
#include<conio.h>

int main()
    {
        int Num = 10;

        printf("\n The Numbers From 10 To 1 => \n");

        while(Num >= 1)
        {
            printf("\n %d ",Num);
            Num--;
        }

        getch();
        return 0;
    }
