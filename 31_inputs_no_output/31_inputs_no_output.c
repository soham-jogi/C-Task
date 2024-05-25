void Addition (int,int);
#include <stdio.h>

int main (void)
{
	int iNo1;
	int iNo2;

	printf("give two numbers :-  ");
	scanf("%d%d",&iNo1,&iNo2);

	Addition (iNo1,iNo2);

	return 0;
}

void Addition (int iNo1,int iNo2)
{
	int iAns;

	iAns = iNo1 + iNo2;

	printf("your answer is %d\n",iAns);
}