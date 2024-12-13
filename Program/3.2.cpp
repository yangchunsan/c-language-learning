#include <stdio.h>

int ten = 10, two = 2;

int main()
{
	printf("Doing it right:");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n",ten, 2, 8);
	
	return 0;	
}
