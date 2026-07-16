#include<stdio.h>
#include<conio.h>

int main()
    {
        int N1 = 0, N2 = 0, Tem = 0;

        printf("\n Enter A First Number : ");
        scanf("%d",&N1);

        printf("\n Enter A Second Number : ");
        scanf("%d",&N2);

        printf("\n Before Swapping -> \n\t\t Number1 = %d , Number2 = %d. ", N1, N2);

        Tem = N1;
        N1 = N2;
        N2 = Tem;

        printf("\n \n After Swapping ->\n\t\t Number1 = %d , Number2 = %d. ", N1, N2);

        getche();
        return 0;

    }
