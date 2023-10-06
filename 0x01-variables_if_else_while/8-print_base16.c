#include <stdio.h>
/**
 * main - A program that prints all hexadecimal members in lowercase
 * Return: 0 if success
 */
int main(void)
{       
        char alph;
        int numbz;
        /*print 0-9*/
        for (numbz = 0; numbz <= 9; numbz++)
            {
                putchar(numbz + '0');
            }
        /*print a-f */
        for (alph = 'a'; alph <= 'f'; alph++)
            {
                putchar(alph);
            }
        putchar('\n');
        return (0);
}
