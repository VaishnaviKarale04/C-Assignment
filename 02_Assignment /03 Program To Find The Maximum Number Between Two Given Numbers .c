#include<stdio.h>
#include<conio.h>

int main()
    {
        int Num1 = 0, Num2 = 0, Max = 0;

        printf("\n Enter A First Number : ");
        scanf("%d",&Num1);

        printf("\n Enter A Second Number : ");
        scanf("%d",&Num2);

        Max = (Num1 > Num2) ?  Num1 :Num2 ;

        if(Num1 != Num2)
        {
            printf("\n The Greater Number is : %d",Max);
        }
        else
        {
            printf("\n The Given Numbers Are Equal.");
        }

        getch();
        return 0;
    }
