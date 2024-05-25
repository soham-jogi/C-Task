#include <stdio.h>

void PrintNumber1toN (int);
void PrintNumberNto1 (int);

int main (void)
{
	int iNo;

	printf("\ngive number for finding its recursive :- ");
	scanf("%d",&iNo);

	printf("from 1 to given numbers :- ");
	PrintNumber1toN(iNo);

	printf("\n");

	printf("from given number to 1 :- ");
	PrintNumberNto1(iNo);

	printf("\n");

	return 0;
}

void PrintNumber1toN (int iNo)
{
	if(iNo == 0)
		return ;

	PrintNumber1toN(iNo -1);

	printf("%d ",iNo);
}

void PrintNumberNto1 (int iNo)
{
	if(iNo == 0)
		return ;

	printf("%d ",iNo);

	PrintNumberNto1(iNo -1);
}