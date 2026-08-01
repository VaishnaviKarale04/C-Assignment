#include<stdio.h>
#include<conio.h>

int main()
{
    char Opr = 0;
    int Num1 = 0, Num2 = 0;

    printf("\n Enter A Operator (+,-,*, /,%%) : ");
    scanf("%c",&Opr);

   switch(Opr)
   {
       case '+': printf("\n Enter A First Number : ");
                 scanf("%d",&Num1);

                 printf("\n Enter A Second Number :");
                 scanf("%d",&Num2);

                 printf("\n\n Addition Of => %d + %d = %d",Num1, Num2, (Num1 + Num2));
                 break;

       case '-': printf("\n Enter A First Number : ");
                 scanf("%d",&Num1);

                 printf("\n Enter A Second Number :");
                 scanf("%d",&Num2);

                 printf("\n\n Subtraction Of => %d - %d = %d",Num1, Num2, (Num1 - Num2));
                 break;

       case '*': printf("\n Enter A First Number : ");
                 scanf("%d",&Num1);

                 printf("\n Enter A Second Number :");
                 scanf("%d",&Num2);


                 printf("\n\n Multiplication Of => %d * %d = %d",Num1, Num2, (Num1 * Num2));
                 break;

       case '/': printf("\n Enter A First Number : ");
                 scanf("%d",&Num1);

                 printf("\n Enter A Second Number :");
                 scanf("%d",&Num2);

                 printf("\n\n  Division Of => %d / %d = %d",Num1, Num2, (Num1 / Num2));
                 break;

       case '%': printf("\n Enter A First Number : ");
                 scanf("%d",&Num1);

                 printf("\n Enter A Second Number :");
                 scanf("%d",&Num2);

                 printf("\n\n Remainder Of => %d %% %d = %d",Num1, Num2, (Num1 % Num2));
                 break;

       default: printf("\n Invalid Operator!!!");
   }

    getch();
    return 0;
}
