#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter A Character : ");
    scanf("%c",&Ch);

    if ( Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u'||
         Ch == 'A' || Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch == 'U')
    {
        printf("\n The Given Character Is Vowel.");
    }
    else
    {
        printf("\n  The Given Character Is Consonant.");
    }

    getch();
    return 0;
}
