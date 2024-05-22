#include <stdio.h>

int main (void)
{
	int iCounter;
	int iCounter1;
	int iCounter2;

	for(iCounter = 0;iCounter < 3; iCounter++)
		printf("%d\n",iCounter);

	for(iCounter = 3;iCounter < 3; iCounter++)
		printf("%d\n",iCounter);

	for(iCounter1 = 0,iCounter2 = 3;iCounter1 < 3 && iCounter2>0;iCounter1++,iCounter2--)
	{
		printf("%d\t",iCounter1);
		printf("%d\n",iCounter2);
	}

	//version 1

	iCounter = 0;
	for(; iCounter<3;iCounter++)
		printf("%d\n",iCounter);

	//version 2

	for (iCounter = 0; ;iCounter++)
	{
		if(iCounter==3)
			break;

		printf("%d\n",iCounter);
	}

	//version 3

	for (iCounter = 0; iCounter<3;)
	{
		printf("%d\n",iCounter);
		iCounter++;
	}

	//version 4

	iCounter = 0;
	for(; ;)
	{
		if(iCounter == 3)
			break;

		printf("%d\n",iCounter);
		iCounter++;
	}

	// version 5   {'while' versiom of 'for'}

	iCounter = 0;
	for(; iCounter<3;)
	{		
		printf("%d\n",iCounter);
			iCounter++ ;
	}	

	return 0;
}