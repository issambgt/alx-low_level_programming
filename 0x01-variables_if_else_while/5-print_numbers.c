#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
int digit = 0; /** Move the variable declaration inside main*/

while (digit <= 9)
{
printf("%d", digit);
digit++;
}
printf("\n");

return (0); /** Add parentheses around the return value*/
}


