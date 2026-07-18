#include<stdio.h>
#include<conio.h>

int main()
    {
        int N1 = 0, N2 = 0, N3 = 0, Tem = 0;

        printf ("\n Enter First Number : ");
        scanf("%d",&N1);

        printf("\n Enter Second Number : ");
        scanf("%d",&N2);

        printf("\n Enter Third Number : ");
        scanf("%d",&N3);

        printf("\n Before Swapping -> \n\t\t First Number = %d , Second Number = %d , Third Number = %d.", N1, N2, N3);

        Tem = N1;
        N1 = N2;
        N2 = N3;
        N3 = Tem;

        printf("\n After Swapping -> \n\t\t First Numbere = %d , Second Number = %d , Third Number = %d.", N1, N2, N3);

        getch();
        return 0;
    }
