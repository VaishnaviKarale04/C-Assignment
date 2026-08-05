#include<stdio.h>
#include<conio.h>

 int main()
 {
     char Letr = 'W';

     if((Letr > 'W')||(Letr < 'E'))
        {
            printf("\n Invalid Input !!!");
            return -1;
        }

     while(Letr >= 'E')
     {
         printf("\n %c", Letr);
         Letr--;
     }

     getch();
     return 0;
 }
