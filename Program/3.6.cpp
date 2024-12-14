#include <stdio.h>
#include <inttypes.h>

int32_t me32;

int main()
{
	me32 = 45933945;
	printf("First, assume int32_t is int:");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any asumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h:");
	printf("me32 = %d", me32);
	
	return 0;
}
