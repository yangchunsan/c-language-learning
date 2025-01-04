#include <stdio.h>
int n = 0;

int main()
{
	size_t intsize;
	intsize = sizeof (int);
	printf("n = %d, n has %zd bypes; all ints have %zd bypes.\n", n, sizeof n, intsize);

	return 0;
}
