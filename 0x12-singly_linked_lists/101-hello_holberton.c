#include <unistd.h>

#define STDOUT 1

int main()
{
	write(STDOUT, "Hello Holberton\n", 16);
	_exit(0);
}
