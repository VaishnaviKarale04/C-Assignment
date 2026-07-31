#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter A Character : ");
    scanf("%c",&Ch);


    if ((Ch >= 'A' && Ch <= 'Z') || (Ch >= 'a' && Ch <= 'z'))
    {
        printf("\n TRUE ");
    }
    else
    {
        printf("\n FALSE ");
    }

    getch();
    return 0;
}
