#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet letters exept q and a
 *
 * Return: 0 (success)
 */

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
