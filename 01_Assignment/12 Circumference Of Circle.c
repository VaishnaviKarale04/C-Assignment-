#include<stdio.h>
#include<conio.h>

int main()
    {
        float Rad = 0, PI = 3.14, Cirf = 0;

        printf("\n Enter a Radius Of Circle :");
        scanf("%f",&Rad);

        Cirf = 2 * PI * Rad;

        printf("\n Circumference Of Circle is %f",Cirf);

        getch();
        return 0;
    }
