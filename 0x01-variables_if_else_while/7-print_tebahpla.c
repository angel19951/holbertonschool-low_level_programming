#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
char revAlpha;
for(revAlpha = 'z' ; revAlpha >= 'a' ; revAlpha--)
{
putchar(revAlpha);
}
return (0);
}
