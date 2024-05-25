void Addition(void);
#include <stdio.h>

int main (void)
{
	Addition ();

	return 0;
}

void Addition(void)
{
	int iNo1;
	int iNo2;
	int iAns;

	printf("give two numbers :-  ");
	scanf("%d%d",&iNo1,&iNo2);

	iAns = iNo1 + iNo2;

	printf("your answer is %d\n",iAns);
}