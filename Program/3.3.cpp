#include <stdio.h>

int x = 100;

int main()
{
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %#d; octal = %#o; hex = %#x\n", x, x, x);
	
	return 0;
	
}
