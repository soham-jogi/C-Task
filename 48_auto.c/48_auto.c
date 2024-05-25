#include <stdio.h>

int main (void)
{
	int iNo1;
	auto int iNo2;

	printf("\n%d,%d\n",iNo1,iNo2);		//output => garbage,garbage 

	return 0;
}

/*
	warnings
	\48_auto.c(8) : warning C4700: uninitialized local variable 'iNo2' used
	\48_auto.c(8) : warning C4700: uninitialized local variable 'iNo1' used

*/