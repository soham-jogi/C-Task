#include <stdio.h>

int main (void)
{
	int iCounter;

	printf("\nodd number between 1 to 10 are =  ");

	for (iCounter = 1;iCounter <=10;iCounter++)
	{
		if(iCounter %2 == 0)
			continue;

		printf("%d  ",iCounter);
	}
	printf("\n");

	return 0;
}


/* output is 

odd number between 1 to 10 are =  1  3  5  7  9

*/