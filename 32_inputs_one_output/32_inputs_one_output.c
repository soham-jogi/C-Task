int Addition (int,int);
#include <stdio.h>

int main (void)
{
	int iNo1;
	int iNo2;
	int iAns;

	printf("give two numbers :-  ");
	scanf("%d%d",&iNo1,&iNo2);

	iAns = Addition (iNo1,iNo2);

	printf("your answer is %d\n",iAns);

	return 0;
}

int Addition (int iNo1,int iNo2)
{
	int iAns;

	iAns = iNo1 + iNo2;

	return iAns;
}