#include<stdio.h>
#include<conio.h>

int main()
    {
        int Num1 = 0, Num2 = 0, Num3 = 0, Max = 0;

        printf("\n Enter A First Number : ");
        scanf("%d",&Num1);

        printf("\n Enter A Second Number : ");
        scanf("%d",&Num2);

        printf("\n Enter A Third Number : ");
        scanf("%d",&Num3);


        Max = (Num1 > Num2) ?
              ((Num1 > Num3) ? Num1 : Num3):


              ((Num2 > Num3) ? Num2 : Num3);
        if(Num1 == Num2 && Num2 == Num3)
        {
            printf("\n The Given Numbers Are Equal.");
        }
        else
        {
            printf("\n The Greater Number is : %d",Max);
        }

        getch();
        return 0;
    }
