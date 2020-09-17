#include <stdio.h>

/**
* main - uses put char to print the aplhabet.
*
* Return: return 0 value at the end of function.
*/
int main(void)
{
char alphabet;

for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
{
putchar(alphabet);
}
return (0);
}
