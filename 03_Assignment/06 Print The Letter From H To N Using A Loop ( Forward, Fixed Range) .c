#include<stdio.h>
#include<conio.h>

 int main()
 {
     char Letr = 'H';

     if((Letr < 'H') || (Letr > 'N'))
        {
            printf("\n Invalid Input !!!");
            return -1;
        }

     while(Letr <= 'N')
     {
         printf("\n %c", Letr);
         Letr++;
     }

     getch();
     return 0;
 }
