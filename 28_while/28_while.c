#include <stdio.h>

int main (void)
{
	int iCounter;

	iCounter = 0;
	for(; iCounter<3;)
	{		
		printf("%d\t",iCounter);		//0 1 2
			iCounter++;
	}

	iCounter = 3;
	for(; iCounter<3;)
	{		
		printf("%d\t",iCounter); 		//no output
			iCounter++;
	}		

	return 0;
}