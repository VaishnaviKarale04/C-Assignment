#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter A Character : ");
    scanf("%c",&Ch);


    if (Ch >= 'A' && Ch <= 'Z')
    {
        printf("\n The Given Character Is Upper Case.");
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        printf("\n  The Given Character Is Lower Case.");
    }
    else if (Ch >= '0' && Ch <= '9')
    {
        printf("\n  The Given Character Is Digit.");
    }
    else
    {
        printf("\n  The Given Character Is Special Symbol.");
    }

    getch();
    return 0;
}
