#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter A Character : ");
    scanf("%c",&Ch);

    if (Ch >= 'A' && Ch <= 'Z')
    {
        Ch = Ch + 32;
        printf("\n The Given Character Is Convert To Lower Case : %c ",Ch);
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        Ch = Ch - 32;
        printf("\n The Given Character Is Convert To Upper Case : %c ",Ch);
    }
     else
    {
        printf("\n The Given Character Is Not Alphabet : %c ",Ch);
    }

    getch();
    return 0;
}
