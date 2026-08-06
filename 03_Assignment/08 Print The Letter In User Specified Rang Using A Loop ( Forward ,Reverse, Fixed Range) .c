#include<stdio.h>
#include<conio.h>

int main()
{
    char Letr, L1, L2;

    printf("\nEnter Start Letter : ");
    scanf(" %c", &L1);

    printf("Enter End Letter : ");
    scanf(" %c", &L2);

    printf("\nForward Range:\n");
    Letr = 'A';
    while(Letr <= 'Z')
    {
        printf("%c ", Letr);
        Letr++;
    }

    printf("\n\nReverse Range:\n");
    Letr = 'Z';
    while(Letr >= 'A')
    {
        printf("%c ", Letr);
        Letr--;
    }

    printf("\n\nUser Specified Range:\n");
    Letr = L1;
    while(Letr <= L2)
    {
        printf("%c ", Letr);
        Letr++;
    }

    getch();
    return 0;
}
