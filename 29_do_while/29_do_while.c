#include <stdio.h>

int main (void)
{
	int iCounter = 0;

	do
	{
		printf("%d ",iCounter);
		iCounter++;
	}while(iCounter < 3);				//output = 0 1 2

	printf("\n");

	iCounter = 3;

	do
	{
		printf("%d \n",iCounter);
		iCounter++;
	}while(iCounter < 3);  				//output = 3

	return 0;		
}
