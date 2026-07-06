#include<stdio.h>
#include<conio.h>

int main()
    {
        char ch = '\0';

        printf("\n Enter a Character : ");
        ch = getche();

        printf("\n ASCII Value in Decimal Of Character %c is : %d ", ch, ch);

        printf("\n ASCII Value in octal Of Character %c is : %o ", ch ,ch);

        printf("\n ASCII Value in Hexadecimal Of Character %c is : %x ", ch , ch);

        getch();
        return 0;
    }
