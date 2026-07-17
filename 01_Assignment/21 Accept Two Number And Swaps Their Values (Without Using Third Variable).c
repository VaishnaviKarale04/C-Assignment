#include<stdio.h>
#include<conio.h>

int main()
    {
        int N1 = 0, N2 = 0;

        printf("\n Enter First Number : ");
        scanf("%d",&N1);

        printf("\n Enter Second Number : ");
        scanf("%d",&N2);

        printf("\n Before Swapping -> \n\t\t First Number = %d , Second Number = %d. ", N1, N2);

        N1 = N1 + N2;
        N2 = N1 - N2;
        N1 = N1 - N2;

        printf("\n After Swapping -> \n\t\t First Number = %d , Second Number = %d. ", N1, N2);

        getch();
        return 0;
    }
