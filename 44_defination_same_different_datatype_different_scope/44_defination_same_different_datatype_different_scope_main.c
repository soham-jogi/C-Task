#include <stdio.h>
void Fun (void);

No = 10;

int main (void)
{
	int No = 20;
	printf("in main %d\n",No);							//output :- in main 20
	{
		char No = 'A';
		printf("in char block %d\n",No);				//output :- in char block 65
	}

	printf("again in main %d\n",No);					//output :- again in main 20

	Fun();

	return 0;
}