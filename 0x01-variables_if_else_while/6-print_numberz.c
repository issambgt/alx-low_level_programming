#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: 0 (success)
 */


int main(void)
{
int digit = 0;/** Move the variable declaration inside main*/

while (digit <= 9)
{
/*convert digit to ASCII representation*/
putchar(digit + '0');
digit++;
}
printf('\n');

return (0);
}
