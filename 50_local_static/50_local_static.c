#include <stdio.h>
void Fun1 (void);
void Fun2 (void);

int main (void)
{
	int iCounter;

	printf("\nin Fun1 without static-> ");

	for(iCounter = 0; iCounter < 3; iCounter ++)
		Fun1();

	printf("\n\n");

	printf("in Fun2 with static -> ");

	for(iCounter = 0; iCounter < 3; iCounter ++)
		Fun2();
	
	printf("\n");
	
	scanf("%d",iCounter);
	return 0;
}

void Fun1 (void)
{
	int iNo = 10;
	++iNo;
	printf("%d,",iNo );
}

void Fun2 (void)
{
	static int iNo = 10;
	++iNo;
	printf("%d,",iNo );
}
