#include <stdio.h>

int main (void)
{
	extern int No;
	extern float No; 					// error LNK2019: unresolved external symbol No referenced in function main

	printf("\n No = %d\n",No);			//fatal error LNK1120: 1 unresolved externals

	return 0;
}
