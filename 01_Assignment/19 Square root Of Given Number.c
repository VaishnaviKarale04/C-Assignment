#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
    {
       int  Num = 0;
       float SquareR = 0;

       printf("\n Enter a Number : ");
       scanf("%d",&Num);

       SquareR = sqrt(Num);

       printf("\n Square Root Of Given Number : %.2f", SquareR);

       getch();
       return 0;
    }
