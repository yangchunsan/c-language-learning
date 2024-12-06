#include <stdio.h>

int main(void) /*把二英寻（测水深的单位）转换为英尺*/
{
	int feet, fathoms;  /*使用一个有意义的变量名*/
	
	fathoms=2;
	feet=6*fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	return 0; 
}
