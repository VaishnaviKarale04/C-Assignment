#include<stdio.h>
#include<conio.h>

int main()
{
    int Day = 0;

    printf("\n Enter A Day Number(1 To 7) : ");
    scanf("%d",&Day);

   switch(Day)
   {
       case 1: printf("\n Monday");
       break;

       case 2: printf("\n Tuseday");
       break;

       case 3: printf("\n Wednesday");
       break;

       case 4: printf("\n Thursday");
       break;

       case 5: printf("\n Friday");
       break;

       case 6: printf("\n Saturday");
       break;

       case 7: printf("\n Sunday");
       break;

       default: printf("\n Invalid Day Number!!!");
   }

    getch();
    return 0;
}
