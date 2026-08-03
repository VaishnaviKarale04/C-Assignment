#include<stdio.h>
#include<conio.h>

int main()
    {
        int Num = 0;

        printf("\n Enter The Number : ");
        scanf("%d",&Num);

        while(Num > 0)
        {
            printf("\n * ");
            Num--;
        }

        getch();
        return 0;
    }
