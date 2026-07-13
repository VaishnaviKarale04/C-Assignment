#include<stdio.h>
#include<conio.h>

int main()
    {
       int  Num = 0, Square = 0;

       printf("\n Enter a Number : ");
       scanf("%d",&Num);

       Square = Num * Num ;

       printf("\n Square Of Given Number : %d", Square);

       getch();
       return 0;
    }
