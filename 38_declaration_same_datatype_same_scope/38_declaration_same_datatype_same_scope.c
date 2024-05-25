#include <stdio.h>

int main (void)
{
	extern int iNo;
	extern int iNo; 					//allowed

	printf("\n iNo = %d\n",iNo);		//iNo = 10

	return 0;
}

int iNo = 10;