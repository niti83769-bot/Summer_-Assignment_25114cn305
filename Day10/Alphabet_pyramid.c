#include <stdio.h>

int main()
{
    int i, j, space;
    char ch;

    for(i = 1; i <= 5; i++)
    {
         for(space = 1; space <= 5 - i; space++)
        {
            printf(" ");
        }
        ch = 'A';
        for(j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }
         ch = ch - 2;
        for(j = 1; j < i; j++)
        {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}
