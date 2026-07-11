#include<stdio.h>
#include<conio.h>

int main()
    {
        int KM = 0, M = 0;

        printf("\n Enter A Kilometre : ");
        scanf("%d",&KM);

        M = KM * 1000;

        printf("\n Kilometre is Convert into Metre is : %d",M);

        getch();
        return 0;

    }
