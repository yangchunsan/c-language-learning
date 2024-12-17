#include <stdio.h>

int cows, legs, integer;

int main() /*this program is perfect*/
{
	printf("How many cow legs did you count?\n");
	scanf("%d", &legs);
	cows = legs / 4;
	printf("That implies there are %d cows.\n", cows);
	
	return 0;
}
