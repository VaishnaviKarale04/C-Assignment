#include<stdio.h>
#include<conio.h>

 int main()
 {
     int Num1 = 0, Num2 = 0;

     printf("\n Enter A First Number : ");
     scanf("%d",&Num1);

     printf("\n Enter A Second Number : ");
     scanf("%d",&Num2);

     if(Num2 < 1)
        {
            printf("\n Invalid Input !!!");
            return -1;
        }

     while(Num2 > 0)
     {
         printf("\n %d", Num1);
         Num2--;
     }

     getch();
     return 0;
 }
