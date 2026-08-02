#include<stdio.h>
#include<conio.h>

int main ()
    {
        int Num = 0;

        printf("\n Enter A Number : ");
        scanf("%d",&Num);

        if(Num >= 0)
        {
            printf("\n Given Number Is Positive : %d ",Num);
        }
        else
        {
            printf("\n Given Number Is Negative : %d ",Num);
        }

        getch();
        return 0;
    }
