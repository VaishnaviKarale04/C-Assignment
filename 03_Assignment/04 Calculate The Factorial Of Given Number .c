#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0, Fact = 1, Temp = 0;

        printf("\n Enter A Number : ");
        scanf("%d",&Num);

        Temp = Num;

          if(Num <= 0)
        {
            printf("\n Invalid Input !!!");
            return -1;
        }

        while(Temp > 1)
        {
            Fact = Fact * Temp;
            Temp--;
        }

        printf("\n Factorial of %d is = %d.", Num, Fact);

        getch();
        return  0;
}
