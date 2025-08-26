/**
* main -  a program that prints all the numbers of base 16 in lowercase.
* Descriptioni: A program that prints all the numbers of base 16 in lowercase.
* Return: Always 0 (Success)
*/
#include <stdio.h>

int main(void)
{
    int n = 48;  /* start from ASCII '0' */

    while (n <= 57)   /* loop until '9' */
    {
        putchar(n);   /* print the digit */

        if (n != 57)  /* if not the last digit */
        {
            putchar(',');  /* print comma */
            putchar(' ');  /* print space */
        }

        n++;  /* move to the next digit */
    }

    putchar('\n');  /* newline at the end */

    return (0);
}
