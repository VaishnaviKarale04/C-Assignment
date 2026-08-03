#include<stdio.h>
#include<conio.h>

int main()
{
    char Std = 0;

    printf("\n Enter A Division Character : ");
    scanf("%c",&Std);

   switch(Std)
   {
       case 'A': printf("\n Your Exam At 10 AM ");
       break;

       case 'a': printf("\n Your Exam At 10 AM ");
       break;

       case 'B': printf("\n Your Exam At 10:30 AM ");
       break;

       case 'b': printf("\n Your Exam At 10:30 AM ");
       break;

       case 'C': printf("\n Your Exam At 1 PM ");
       break;

       case 'c': printf("\n Your Exam At 1 PM ");
       break;

       case 'D': printf("\n Your Exam At 1:30 PM ");
       break;

       case 'd': printf("\n Your Exam At 1:30 PM ");
       break;

       default: printf("\n Invalid Division!!!");
   }

    getch();
    return 0;
}
