#include <stdio.h>
/**
* main - Let the coding begin
* Description: Using the main function
* this program prints all possible combinations of single-digit numbers.
* Return: 0
*/
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
putchar(c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
