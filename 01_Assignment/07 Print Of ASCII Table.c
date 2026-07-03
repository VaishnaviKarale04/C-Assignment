#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;

    printf("\n ASCII Table is => ");

    while(i < 128 )
    {
        printf("\n %d : %c",i, i);
        i++;
    }

    getch();
    return 0;
}
