#include <stdio.h>

int main (void)
{
	int iCounter;

	for (iCounter = 1; iCounter <= 10;iCounter++)
	{
		if(iCounter %2 == 0)
			break;

		printf("%d",iCounter);							// output = 1
	}

	return 0;
}